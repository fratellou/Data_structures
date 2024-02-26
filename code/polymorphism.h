#ifndef POLYMORPHISM
#define POLYMORPHISM
#include <iostream>
using namespace std;

// Class "Сотрудник"
class Employee {
protected:
    string name;
    int employeeID;

public:
    Employee(const std::string& empName, int empID) : name(empName), employeeID(empID) {}

    // A virtual method for performing work duties 
    virtual void doWork() const {
        cout << "Выполнение рабочих обязанностей сотрудником - "  << name << '-' << employeeID << endl;
    }

    virtual ~Employee() {}
};

// Subclass "Сотрудник Федеральной службы безопасности"
class Federal_Security_Servicee : public Employee {
private:
    int securityLevel;

public:
    Federal_Security_Servicee(const string& empName, int empID, int secLevel) 
        : Employee(empName, empID), securityLevel(secLevel) {}

    // Redefining a method to perform work duties
    void doWork() const override {
        cout << "Была осуществлена деятельность, направленная на защиту разведывательной программы Агентства от разведывательной службы оппозиции - " << name << '-' << employeeID << endl;
    }
};

// Subclass "Сотрудник аппарата Национального антитеррористического комитета"
class The_Office_of_the_National_AntiTerrorism_Committee : public Employee {
public:
    The_Office_of_the_National_AntiTerrorism_Committee(const string& empName, int empID) : Employee(empName, empID) {}

    // Redefining a method to perform work duties
    void doWork() const override {
        cout << "Были произведены меры по противодействию терроризму - " << name << '-' << employeeID << endl;
    }
};

// Subclass "Сотрудник Службы по защите конституционного строя и борьбе с терроризмом"
class Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism : public Employee {
public:
    Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism(const string& empName, int empID) : Employee(empName, empID) {}

    // Redefining a method to perform work duties
    void doWork() const override {
        cout << "Были произведены меры по предотвращению внутриполитических угроз и защите конституционного строя - " << name << '-' << employeeID << endl;
    }
};

// A common function for doing work with an employee
void performWork(const Employee& emp) {
    emp.doWork();
}

#endif