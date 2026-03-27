#include "student.h"

 Student :: Student(string n, int id, double gpa): UniversityMember(n,id){  //calling university member constructor
    cgpa = gpa;
 }
   
double Student :: getCGPA(){
    return cgpa;
}
   
void Student :: updateCGPA(double newCGPA){
    cgpa =  newCGPA;
}
//overriden function from base class
void Student :: displayRole(){
    cout<<"Role: Student"<<endl;
}