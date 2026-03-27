#include "universitymember.h"

//abstract class because it contains a pure virtual function
 UniversityMember :: UniversityMember(string n, int id){
    name = n;
    memberID = id;
 }

UniversityMember :: ~UniversityMember(){
    cout<<"University member class destroyed"<<endl;
}

//basic getters tht will access 
//these attributes for derived classes
int UniversityMember:: getMemberID(){
    return memberID;
}
    
string UniversityMember:: getName(){
    return name;
}

