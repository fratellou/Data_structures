#include "list_tasks.h"
using namespace std;

int main() {
  LinkedList government_service;
  government_service.createEmptyLinkedList();  // creating an empty linked list
  cout << "1. Список до добавления элементов:\n";
  government_service.print();

  government_service.add("Разведка");
  government_service.add("Разведка");
  government_service.add(
      "Пограничная-деятельность");  // adding a new node with a value to the
                                    // beginning of the linked list
  cout << "2. Список после добавления элементов в начало:\n";
  government_service.print();

  government_service.addToEnd("Обеспечение-информационной-безопасности");
  government_service.addToEnd(
      "Кадровый-состав");  // adding a new node with a value to the end of the
                           // linked list
  cout << "\n3. Список после добавления элементов в конец:\n";
  government_service.print();

  cout << "\n4. Результат проверки наличия первого узла связанного списка: "
       << testRemoveFirstNode(
              &government_service);  // checking for the presence and deleting
                                     // the first node from the linked list
  cout << "Список после проверки наличия и удаления первого узла из связанного "
          "списка:\n";
  government_service.print();

  cout << "\n5. Результат проверки наличия и удаления всех узлов со значением "
          "'Разведка' из связанного списка: "
       << testRemoveValues(
              &government_service,
              "Разведка");  // checking for the presence and deleting the first
                            // node from the linked list
  cout << "Список после проверки наличия и удаления всех узлов со значением "
          "'Разведка' из связанного списка:\n";
  government_service.print();

  return 0;
}

// A test to verify the removal of the first node from the linked list
string testRemoveFirstNode(LinkedList* myList) {
  if ((*myList).head != NULL) {
    string firstNodeElement = (*myList).head->element;

    string removedElement;
    (*myList).remove(removedElement);

    // Checking that the value of the deleted element matches the expected value
    assert(removedElement == firstNodeElement);
    return "Первый элемент удален.\n";
  }
  return "Узел не найден. Список пуст.\n";
}

// checking for the presence and removal of all nodes with the value from the
// linked list
string testRemoveValues(LinkedList* myList, const string& value) {
  if ((*myList).head != NULL) {
    int search_result = (*myList).search(value);
    (*myList).setPrintErrorsFalse();
    assert(search_result != -1);  // Checking that the value of the deleted
                                  // element matches the expected value
    if (search_result == -1) return "Узел с искомым элементом не найден.\n";
    while ((*myList).removeByValue(value))
      ;
    return "Искомые элементы удалены.\n";
  }
  return "Список пуст.\n";
}