#include "inheritance.h"
using namespace std;

int main() {
    // Creating objects of various classes
    Federal_Security_Servicee FSC_employee("Петр", 2002, 3);
    The_Office_of_the_National_AntiTerrorism_Committee NAC_employee("Мария", 3003);
    Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism SFPOCOAFAT_employee("Иван", 4004);

    // Calling a common method for employees
    FSC_employee.doWork();
    NAC_employee.doWork();
    SFPOCOAFAT_employee.doWork();


    // Calling a specific method
    cout << "Уровень доступа сотрудника ФСК: " << FSC_employee.getSecurityLevel() << endl;
    FSC_employee.setSecurityLevel(4);
    cout << "Уровень доступа сотрудника ФСК: " << FSC_employee.getSecurityLevel() << endl;

    // Calling a specific method
    cout << "Количество персонала в составе НАК: " << NAC_employee.getNumberOfPersonnel() << endl;

    // Calling a specific method
    SFPOCOAFAT_employee.printDirector();
    

    return 0;
}