/*
 - This is the database, a linkedlist houses nodes which house items. 
 - Function much like a regular linkedlist, but don't forget to call the object item to access fields.
 - Used linkedList as adding and removing would be quicker, but still thinking if an array list might have been better(faster search)
*/

#include "Item.h"
#include <string.h>
#include <iostream>

// Will hold all items LinkedList
class Database
{

// public Function & field prototype
public:
    ~Database(); // Destructor
    Database();  // Constructor
    void PutItem(int, string);  // Adds a node to the beginning of list 
    int GetLength() const;  // Gets the number of nodes in the list
    void display();  //Displays everyhting in list (created for testing)
    string pass();
    
    bool exist();
    bool searchId();
    
    long IdCounter = 1; // Will provide all items a unique ID number

// private Function & field prototype
private:
    // Struct to create nodes
    struct Node {
        // Data will be an object
        Item item;
        // Will hold the address of the next node
        Node* next;
    };
    
    // Length counter
    int length;
    // Node pointer will hold start address
    Node* listData;
    
    // Admin default access [Temp will probably implement a structured array of admin users with Unique password according to 
    // name and password match
    
    string defaultPass = "H3ll0Admin!";

};

// Constructor to initiate LinkedList starting point
Database ::Database()
{
    length = 0;  // Initiats length
    listData = NULL;  // Sets the start point to NULL as the list is empty
}

// Inserts a new node at the begining of the list, with the user inputed data.
void Database ::PutItem(int quantity, string itemName)
{
    
    string first; 
    string last;
    string name;
    string input;
    long userId;
    
    Node* location = new Node;
    location->item.setQuantity(quantity);
    location->item.setItemName(itemName);
    
    
    cout << "Please enter your first name: "; 
    cin >> first;
    
    cout << "Please enter your last name: "; 
    cin >> last;
    
    name = first + " " + last;
    
    location->item.setUserName(name);
    
    cout << "Please enter you phone number: "; 
    cin >> input;
    location->item.setPhoneNum(input);
    
    cout << "Please enter you User_Id: "; 
    cin >> userId;
    location->item.setUserId(userId);
    
    location->next = listData;
    listData = location;
    length++;
}

// Get list length function. Simply return the counter.
int Database ::GetLength() const {
    return length;
}

// Destructor
Database ::~Database(){
    Node* tempPtr;
    
    while(listData != NULL){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
}

// Created it for testing purposes
void Database ::display()
{
    cout << endl;
    
    Node* temp = new Node;
    temp = listData;
    while(temp != NULL) {
        cout << temp->item.getQuantity() << endl;
        cout << temp->item.getItemName() << endl;
        cout << temp->item.getUserName() << endl;
        cout << temp->item.getPhoneNum() << endl;
        
        temp = temp->next;
    }
}

string Database :: pass(){
    return defaultPass;
}