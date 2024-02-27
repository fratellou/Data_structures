#include "hash_tasks.h"
using namespace std;

int main() {
  HashTable myHash;
  myHash.set("key", "value");
  cout << "1. Ускоренный поиск элемента по ключу: результат поиска - "
       << myHash.get("key") << endl;

  myHash.set("key1", "value1");
  myHash.set("key2", "value2");
  myHash.set("key3", "value3");
  myHash.set("key", "updated_value");  // Duplicate key, will be ignored
  cout << "\n2. Устранение дубликатов. Значение для key: " << myHash.get("key")
       << endl;

  Cache cache;
  cache.addToCache("param1", "result1");
  cache.addToCache("param2", "result2");
  cout << "\n3.\nРезультат вычисления для param1: "
       << cache.getFromCache("param1") << endl;
  cout << "Результат вычисления для param2: " << cache.getFromCache("param2")
       << endl;
  cout << "Результат вычисления для param3: " << cache.getFromCache("param3")
       << endl;

  return 0;
}