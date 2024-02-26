#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream>
using namespace std;

// Class "Сотрудник"
class Employee {
protected:
    string name;
    int employeeID;

public:
    Employee(const std::string& empName, int empID) : name(empName), employeeID(empID) {}

    virtual ~Employee() {}
};

// Subclass "Сотрудник Федеральной службы безопасности"
class Federal_Security_Servicee : public Employee {
private:
    int securityLevel;
public:
    Federal_Security_Servicee(const string& empName, int empID, int secLevel) 
        : Employee(empName, empID), securityLevel(secLevel) {}

    void doWork() const {
        cout << "Была осуществлена деятельность, направленная на защиту разведывательной программы Агентства от разведывательной службы оппозиции - " << name << '-' << employeeID << endl;
    }

    void setSecurityLevel(const int& level) {
        securityLevel = level;
    }

    int getSecurityLevel() const {
        return securityLevel;
    }
};

// Subclass "Сотрудник аппарата Национального антитеррористического комитета"
class The_Office_of_the_National_AntiTerrorism_Committee : public Employee {
private:
    int numberOfNACPersonnel = 500;
public:
    The_Office_of_the_National_AntiTerrorism_Committee(const string& empName, int empID) : Employee(empName, empID) {}

    void doWork() const {
        cout << "Были произведены меры по противодействию терроризму - " << name << '-' << employeeID << endl;
    }

    int getNumberOfPersonnel() const {
        return numberOfNACPersonnel; 
    }
};

// Subclass "Сотрудник Службы по защите конституционного строя и борьбе с терроризмом"
class Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism : public Employee {
private:
    string director = "Генерал-полковник Алексей Семёнович Седов";
public:
    Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism(const string& empName, int empID) : Employee(empName, empID) {}

    void doWork() const {
        cout << "Были произведены меры по предотвращению внутриполитических угроз и защите конституционного строя - " << name << '-' << employeeID << endl;
    }

    void printDirector() const {
        cout << "Руководитель СЗКСиБТ: " << director << endl;
    }
};

#endif