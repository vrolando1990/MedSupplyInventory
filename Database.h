#pragma once
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
    void printFile();
    
    void display();  //Displays everyhting in list (created for testing)
    string pass();
    
    bool exist();
    bool searchId();
    
    void searchByName(string productName);
    void searchById(long producId);
 
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
