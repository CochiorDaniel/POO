#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

class Student
{
private:
    std::string name;
    float nota_mate;
    float nota_ist;
    float nota_eng;

public:
    void set_name(std::string n);
    std::string get_name();
    
    bool set_nota_mate(int x);
    float get_nota_mate();
    
    bool set_nota_ist(int x);
    float get_nota_ist();
    
    bool set_nota_eng(int x);
    float get_nota_eng();
    
    double get_avg();
    
};


#endif // _STUDENT_H_
