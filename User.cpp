/*
 Will host the user menu and call the correct functions
*/

#include "Database.h"
#include <iostream>
#include <locale>
using namespace std;

int main()
{

    // Initiate database
    Database database;
    // char will hold users input
    char answer;
    // Will hold user entered password [Admin Only]
    string password;
    string input;
    int quant;
    long prodId;
do{
    answer = ' ';
    password = " ";
    // Kicks off the menu
    cout << "-------- Welcome to Inventory --------" << endl << endl;

    // Asks if its an admin (Should go to another menu if yes)
    // Do while a Y or an N is not entered

    do {

        cout << "Are you an administrator? [Y/N]: ";
        cin >> answer;

        // If the user is an admin do this
        if(char(tolower(answer)) == 'y') {
            do {

                cout << "\nEnter your password [Q to quit]: ";
                cin >> password;

                if(password != database.pass() && password != "Q" && password != "q") {
                    cout << "The password you have entered is inccorect please try again." << endl;
                }

            } while(password != database.pass() && password != "Q" && password != "q");
        }

    } while((char(tolower(answer)) != 'n') && (password != database.pass()));
    if(password == database.pass()) {
        do {
            if(password == database.pass()) {

                // Admin view
                cout << "\n-------- Administrator, What would you like to do? --------" << endl << endl;

                do {
                    cout << "1. Search" << endl;
                    cout << "2. Modify" << endl;
                    cout << "3. Remove Item" << endl;
                    cout << "4. Print file" << endl; // Check feasability of printing a database...
                    cout << "5. Quit program" << endl;
                    cout << "Enter: ";
                    cin >> answer;
                    cout << endl;
                } while(answer != '1' && answer != '2' && answer != '3' && answer != '4' && answer != '5');

                if(answer == '1') {
                    cout << "Enter product ID: ";
                    cin >> prodId;
                    database.searchById(prodId);
                } else if(answer == '2') {
                    cout << "Enter an Id to search for: ";
                    cin >> prodId;
                    database.Modify(prodId);
                } else if(answer == '3') {
                    cout << "Enter the Id of request to delete: ";
                    cin >> prodId;
                    database.deleteReq(prodId);
                } else if(answer == '4') {
                    database.printFile();
                }
            }

        } while(answer != '5');
    }
    if(char(tolower(answer)) == 'n') {
        do {
            // If user is not an admin do this

            // Output secondary menu
            cout << "\n-------- What would you like to do? --------" << endl << endl;
            do {
                cout << "1. Check Request" << endl;
                cout << "2. Request Item" << endl;
                cout << "3. Quit program" << endl;
                cout << "\nEnter Selection: ";
                cin >> answer;
            } while(answer != '1' && answer != '2' && answer != '3');

            // Program continues based on user selection
            if(answer == '1') {
                cout << "\nHow would you like to search? " << endl << endl;
                cout << "1: Search by Name " << endl;
                cout << "2: Search by product Id " << endl;
                cout << "\nEnter Selection: ";
                cin >> answer;

                if(answer == '1') {
                    cout << "\nEnter the name of the product: ";
                    cin >> input;
                    database.searchByName(input);
                } else if(answer == '2') {
                    cout << "\nEnter the the products Id: ";
                    cin >> prodId;
                    database.searchById(prodId);
                }

            } else if(answer == '2') {
                cout << "\nEnter the name of the product or tool being requested: ";
                cout << "\nEnter: ";
                cin >> input;

                cout << "Enter the desired quantity: ";
                cout << "\nEnter: ";
                cin >> quant;

                database.PutItem(quant, input);

                cout << "Request Submitted!" << endl;
            }

        } while(answer != '3');
    }
    
    do{
    cout << "\nWhat would you like to do?" << endl << endl;
    cout << "1. Completely quit program" << endl;
    cout << "2. Go back to start" << endl;
    cout << "Enter: ";
    cin >> answer;
    } while(answer != '1' && answer != '2');
    
} while(answer != '1');

    cout << "\nGoodbye!" << endl << endl;
    
    // database.display();
    database.~Database();

    return 0;
}