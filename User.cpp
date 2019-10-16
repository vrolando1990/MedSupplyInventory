/*
 Will host the user menu and call the correct fuctions  
*/

#include "Database.h"
#include <iostream>
#include <locale>
using namespace std;

int main(){

    // Initiate database 
    Database database;
    // char will hold users input
    char answer;
    
    // Will hold user entered password [Admin Only]
    string password; 
    
    string input; 
    int quant; 
    long prodId;
    
    // Kicks off the menu 
    cout << "-------- Welcome to Inventory --------" << endl << endl;
    
    // Asks if its an admin (Should go to another menu if yes)
    // Do while a Y or an N is not entered
    do{
        cout << "Are you an administrator? [Y/N]: ";
        cin >> answer;
    } while((char(tolower(answer)) != 'y') && (char(tolower(answer)) != 'n')); // Makes answer lower case to reduce the conditions 

    // If the user is an admin do this
    if(char(tolower(answer)) == 'y') {
        cout << "\nEnter your password: ";
        cin >> password; 
        
        if(password == database.pass()){
            
            // Admin view
            cout << "\n-------- Administrator, What would you like to do? --------" << endl << endl;
            cout << "1. Search" << endl;
            cout << "2. Modify" << endl;
            cout << "3. Remove Item" << endl; 
            cout << "4. Get request information" << endl; 
            cout << "5. Print file" << endl;  // Check feasability of printing a database...
            cout << "6. Accept or Deny product" << endl;
            cin >> answer;       
        } else{
            cout << "The password you have entered is inccorect please try again." << endl << endl;
        }
    // If user is not an admin do this
    } else if(char(tolower(answer)) == 'n') {
        // Output secondary menu
        cout << "\n-------- What would you like to do? --------" << endl << endl;
        cout << "1. Check Stock" << endl;
        cout << "2. Request Item" << endl;
        cout << "\nEnter Selection: ";
        cin >> answer;
            
            // Program continues based on user selection 
            if(answer == '1'){
                cout << "\nHow would you like to search? " << endl << endl;
                cout << "1: Search by Name " << endl; 
                cout << "2: Search by product Id " << endl; 
                cout << "\nEnter Selection: ";
                cin >> answer; 
                
                    if(answer == 1){
                        cout << "Enter the name of the product: ";
                        cin >> input;
                        database.searchByName(input);    
                    } else if (answer == 2){
                        cout << "Enter the the products Id: ";
                        cin >> prodId;
                        database.searchById(prodId);
                    }
                
            } else if (answer == '2'){
                cout << "Enter the name of the product or tool being requested: ";
                cout << "\nEnter: ";
                cin >> input; 
                
                cout << "Enter the desired quantity: ";
                cout << "\nEnter: ";
                cin >> quant;
                
                database.PutItem(quant, input);
                
            }
    }
    
    database.display();
    database.~Database();
    
    return 0;
}