#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H
#include <fstream>
#include <iostream>
using namespace std;

void task1();

template <typename T>
class Account {
 private:
  T balance;

 public:
  Account(T initial_balance) : balance(initial_balance){};

  // The method for adding funds to the account
  void deposit(const T amount) {
    balance += amount;
    cout << "Пополнение на " << amount << " прошло успешно.\n";
  }

  // The method for debiting funds from the account
  void withdraw(const T amount) {
    if (balance >= amount) {
      balance -= amount;
      cout << "Списание " << amount << " прошло успешно.\n";
    } else {
      cout << "Недостаточно средств на счете для списания " << amount << endl;
    }
  }

  // The method for getting the current balance
  T get_balance() const { return balance; }

  void account_ballanse() const {
    cout << "Текущий баланс: " << get_balance() << endl;
  }
};

void task2();

template <typename T>
class Object {
 private:
  T data;
  string name;

 public:
  Object(T initial_data, const string& object_name)
      : data(initial_data), name(object_name) {}

  T getData() const { return data; }

  void setData(const T& new_data) { data = new_data; }

  const string getName() const { return name; }

  void setName(const string& new_name) { name = new_name; }

  // A method for displaying information about an object
  void printInfo() const {
    cout << "Имя объекта: " << name << ", Данные объекта: " << data << endl;
  }

  // A method for checking the equality of object data
  bool equals(const T& other_data) const { return data == other_data; }

  // A method for increasing an object's data by a specified amount
  void incrementData(const T& amount) { data += amount; }

  // A method for reducing object data by a specified amount
  void decrementData(const T& amount) { data -= amount; }

  // Method for resetting object data
  void resetData() { data = T(); }
};

void task3();

class User {
 private:
  string username;
  string password;
  int securityClearanceLevel;

 public:
  User(const string& uname, const string& pass, int clearanceLevel)
      : username(uname),
        password(pass),
        securityClearanceLevel(clearanceLevel) {}

  // Method for user authentication
  bool authenticate(const string& uname, const string& pass) const {
    return (username == uname && password == pass);
  }

  // The method for changing the user's password
  void changePassword(const string& oldPass, const string& newPass) {
    if (password == oldPass) {
      password = newPass;
      cout << "Пароль успешно изменен.\n";
    } else
      cout << "Повторите попытку ввода старого пароля.\n";
  }

  // The method for getting the user name
  const string& getUsername() const { return username; }

  // A method for checking the availability of the required access level
  bool hasClearance(int requiredClearanceLevel) const {
    return securityClearanceLevel >= requiredClearanceLevel;
  }

  // Method for working with a profile
  void userProfile() const {
    cout << "Логин пользователя: " << username
         << ", Уровень доступа: " << securityClearanceLevel << endl;
  }
};

void task4();

class FileManager {
 public:
  // The method for creating the file
  void createFile(const string& filename) { ofstream file(filename); }

  // Method for deleting a file
  void deleteFile(const string& filename) {
    if (remove(filename.c_str()) == 0) {
      cout << "Файл \"" << filename << "\" успешно удален.\n";
    } else {
      cerr << "Ошибка при удалении файла \"" << filename << "\".\n";
    }
  }

  // Method for renaming a file
  void renameFile(const string& oldname, const string& newname) {
    if (rename(oldname.c_str(), newname.c_str()) == 0) {
      cout << "Файл успешно переименован из \"" << oldname << "\" в \""
           << newname << "\".\n";
    } else {
      cerr << "Ошибка при переименовании файла \"" << oldname << "\".\n";
    }
  }

  // Method for writing data to a file
  bool writeToFile(const string& filename, const string& data) {
    ofstream file(filename);
    if (file.is_open()) {
      file << data;
      file.close();
      return true;
    } else {
      cerr << "Ошибка при открытии файла \"" << filename << "\" для записи.\n";
      return false;
    }
  }

  // A method for reading data from a file
  string readFromFile(const string& filename) {
    ifstream file(filename);
    string content;
    if (file.is_open()) {
      string line;
      while (getline(file, line)) {
        content += line + "\n";
      }
      file.close();
    } else {
      cerr << "Ошибка при открытии файла \"" << filename << "\" для чтения.\n";
    }
    return content;
  }
};

#endif