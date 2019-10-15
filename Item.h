
/*
 Class will be the users requst form basically we will control the inputed data in the user menu  
*/

#include <iostream>
using namespace std;

// Will be anything people add
class Item {
public:

    void setQuantity(int);
    int getQuantity();
    
    void setItemName(string);
    string getItemName();
    
    void setUserName(string);
    string getUserName();
    
    void setPhoneNum(string);
    string getPhoneNum();
    
    void setUserId(long);
    long getUserId();
    
    
    
private:

    long UniqueId = 0; 
    int quantity = 0;
    string itemName = "";
    
    // User information 
    string userName;
    string phoneNum; 
    long userId; 
    
};

void Item :: setQuantity(int quant){
    quantity = quant;
}

int Item :: getQuantity(){
    return quantity;
}

void Item :: setItemName(string name){
    itemName = name;
}

string Item :: getItemName(){
    return itemName;
}


void Item :: setUserName(string name){
    userName = name;
}

string Item :: getUserName(){
    return userName;
}

void Item :: setPhoneNum(string phone){
    phoneNum = phone;
}

string Item :: getPhoneNum(){
    return phoneNum;
}

void Item :: setUserId(long id){
    userId = id;
}

long Item :: getUserId(){
    return userId;
}
