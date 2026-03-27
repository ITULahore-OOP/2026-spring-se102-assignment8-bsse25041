#include "universitymember.h"


 UniversityMember :: UniversityMember(string n, int id){
    name = n;
    memberID = id;
 }

UniversityMember :: ~UniversityMember(){
    cout<<"University member class destroyed"<<endl;
}
    
int UniversityMember:: getMemberID(){
    return memberID;
}
    
string UniversityMember:: getName(){
    return name;
}

