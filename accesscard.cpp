#include "accesscard.h"



AccessCard:: AccessCard(string id, int level){
    cardID = id;
    accessLevel = level;
}

string AccessCard :: getCardID(){
    return cardID;
}
    
int AccessCard :: getAccessLevel(){
    return accessLevel;
}
    
void AccessCard :: displayCardInfo(){
    cout<<"Card ID: "<<cardID<<endl;
    cout<<"Access Level: "<<accessLevel<<endl;
}