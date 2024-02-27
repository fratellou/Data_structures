#include "queue_tasks.h"
using namespace std;

int main() {
  // Adding tasks to the queue
  FSS_tasks.push("Разработка стратегии развития страны");
  FSS_tasks.push("Поиск кадров, способных реализовать план развития страны");
  FSS_tasks.push("Образование состава государственной власти");
  FSS_tasks.push("Выполнение задач, поставленных Конституцией РФ");
  FSS_tasks.push("Принятие решений по важным текущим вопросам жизни страны");
  FSS_tasks.push(
      "Охрана прав, свобод и законных интересов граждан, обеспечение "
      "правильного развития человеческой личности");
  FSS_tasks.push(
      "Создание необходимых условий для выполнении функций государственных "
      "органов");

  // Creating an array of threads to perform tasks
  const int numThreads = 3;
  thread threads[numThreads];

  // Starting the threads
  for (int i = 0; i < numThreads; ++i) {
    threads[i] = thread(processTasks);
  }

  // Waiting for all threads to complete
  for (int i = 0; i < numThreads; ++i) {
    threads[i].join();
  }

  return 0;
}

// A function for completing a task from a queue
void processTasks() {
  while (true) {
    string task;
    {
      unique_lock<mutex> lock(queueMutex);
      if (FSS_tasks.head != nullptr) {
        task = FSS_tasks.pop();  // Removing the task from the queue
      } else {
        // If the queue is empty, exit the loop
        break;
      }
    }

    unique_lock<mutex> coutLock(coutMutex);
    cout << task << ": обработана потоком - " << this_thread::get_id() << endl;
  }
}