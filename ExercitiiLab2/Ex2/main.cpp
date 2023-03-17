#include <iostream>
#include <string>
#include "Student.h"
#include "GlobalFunctions.h"

int main(){
    Student Daniel;
    Daniel.set_name("Cochior Daniel");
    Daniel.set_nota_mate(10);
    Daniel.get_nota_mate();
    
    Student George;
    George.set_name("George Constantin");
    George.set_nota_mate(5);
    

    std::cout << compare_by_name(Daniel, George) << "\n";
    Daniel.set_nota_ist(9);
    Daniel.set_nota_eng(9);
    George.set_nota_ist(8);
    George.set_nota_eng(10);
    std::cout<< Daniel.get_avg() << "\n";
    
    std::cout << compare_by_avg(Daniel, George) << "\n";
    std::cout << compare_by_mate(Daniel, George) << "\n";
    std::cout << compare_by_ist(Daniel, George) << "\n";
    std::cout << compare_by_eng(Daniel, George) << "\n";
    
    return 0;
}
