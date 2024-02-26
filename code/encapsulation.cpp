#include "encapsulation.h"
using namespace std;

int main() {
    task1();
    task2();
    task3();
    task4();
    return 0;
}

void task1() {
    cout << "1." << endl;
    Account<float> my_account(1000);
    my_account.account_ballanse();

    my_account.deposit(500);
    my_account.account_ballanse();

    my_account.withdraw(173.80);
    my_account.account_ballanse();

    my_account.withdraw(2000); 
    my_account.account_ballanse();

}

void task2() {
    cout << "\n2." << endl;
    Object<int> intObject(42, "IntegerObject");
    Object<double> doubleObject(3.14, "DoubleObject");
    Object<char> charObject('c', "CharObject");

    intObject.printInfo();
    doubleObject.printInfo();
    charObject.printInfo();

    intObject.incrementData(10);
    doubleObject.decrementData(1.0);
    charObject.incrementData(1);

    intObject.printInfo();
    doubleObject.printInfo();
    charObject.printInfo();

    intObject.resetData();
    charObject.resetData();
    doubleObject.setName("NewDoubleObject");

    intObject.printInfo();
    doubleObject.printInfo();
    charObject.printInfo();
}

void task3() {
     cout << "\n3." << endl;
    User user("Иван", "password123", 3); 
    // Working with a profile
    user.userProfile();

    // Authentication attempt
    if (user.authenticate("Иван", "password123")) {
        cout << "Аутентификация успешна.\n";
    } else {
        cout << "Ошибка аутентификации.\n";
    }

    // Changing the user's password
    user.changePassword("pass", "pass");
    user.changePassword("password123", "pass");

    // Checking access to confidential information
    if (user.hasClearance(2)) {
        cout << "Пользователь " << user.getUsername() << " имеет доступ к конфиденциальной информации уровня 2.\n";
    } else {
        cout << "Пользователь " << user.getUsername() <<  " не имеет необходимого уровня доступа.\n";
    }
}

void task4() {
    cout << "\n4." << endl;
    FileManager myManager;
    myManager.createFile("test.txt");
    myManager.writeToFile("test.txt", "Привет, мир!");

    cout << "Содержимое файла test.txt: " << myManager.readFromFile("test.txt");

    myManager.renameFile("test.txt", "new_test.txt");

    myManager.deleteFile("new_test.txt"); 

}