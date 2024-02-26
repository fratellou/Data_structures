#include "polymorphism.h"
using namespace std;

int main() {
    // Creating objects of various classes
    Federal_Security_Servicee FSC_employee("Петр", 2002, 3);
    The_Office_of_the_National_AntiTerrorism_Committee NAC_employee("Мария", 3003);
    Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism SFPOCOAFAT_employee("Иван", 4004);

    // Calling a common function to do the job
    performWork(FSC_employee);
    performWork(NAC_employee);
    performWork(SFPOCOAFAT_employee);

    return 0;
}