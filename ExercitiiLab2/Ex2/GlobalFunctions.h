#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include "Student.h"
#include <string>

int compare_by_name(Student s1, Student s2){
    return s1.get_name().compare(s2.get_name());
}

int compare_by_avg(Student s1, Student s2){
    if(s1.get_avg()>s2.get_avg())
        return 1;
    else if(s1.get_avg()<s2.get_avg())
        return -1;
    else
        return 0;
}

int compare_by_mate(Student s1, Student s2){
    if(s1.get_nota_mate()>s2.get_nota_mate())
        return 1;
    else if(s1.get_nota_mate()<s2.get_nota_mate())
        return -1;
    else
        return 0;
}

int compare_by_ist(Student s1, Student s2){
    if(s1.get_nota_ist()>s2.get_nota_ist())
        return 1;
    else if(s1.get_nota_ist()<s2.get_nota_ist())
        return -1;
    else
        return 0;
}

int compare_by_eng(Student s1, Student s2){
    if(s1.get_nota_eng()>s2.get_nota_eng())
        return 1;
    else if(s1.get_nota_eng()<s2.get_nota_eng())
        return -1;
    else
        return 0;
}

#endif  