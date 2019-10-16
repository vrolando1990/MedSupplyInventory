#include "Item.h"

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

void Item :: setItemId(long id){
    UniqueId = id;
}

long Item :: getItemId(){
    return UniqueId;
}

void Item :: printDescription()
{
    cout << "Item Description:" << endl;
    cout << "Product Name: " << itemName << endl;
    cout << "Product ID: " << UniqueId << endl;
    cout << "Available count: " << quantity << endl;
}
