#pragma once
/*
 Class will be the users requst form basically we will control the inputed data in the user menu
*/

#include <iostream>
using namespace std;

// Will be anything people add
class Item
{
public:
    void setQuantity(int);
    int getQuantity();

    void setItemName(string);
    string getItemName();

    void setItemId(long);
    long getItemId();

    void setUserName(string);
    string getUserName();

    void setPhoneNum(string);
    string getPhoneNum();

    void setUserId(long);
    long getUserId();

    void setUniqueId(long);
    long getUniqueId();

    void setStateReq(string);
    string getStateReq();

    void printDescription();

private:
    long uniqueId = 0;
    int quantity = 0;
    string itemName = "";
    string stateReq = "Undecided";

    // User information
    string userName;
    string phoneNum;
    long userId = 0;
};