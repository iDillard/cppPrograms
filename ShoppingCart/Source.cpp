// Isaiah Dillar
// Final Exam pt2

#include<iostream>
#include<string>
#include "Cart.h"
#include "Item.h"
using namespace std;

int main()
{
    char choice = ' ';
    string itemName = "";
    string cartName = ""; // name of cart
    double cost = 0.0; 
    bool added;

    // create a Cart object



    cout << "Would you like to puchase an item from the store (y/n)? ";
    cin >> choice;
    choice = tolower(choice);

    Cart userCart(cartName);

    while (choice == 'y')
    {
        cin.ignore();
        cout << "What is the name of the item that you like to purchase? ";
        getline(cin, itemName);
        cout << "What is the cost of the item? ";
        cin >> cost;
        // create an Item object 
        Item cartItem(itemName, cost);



        // call cart object’s Purchase function to add item in the cart array

        added = userCart.Purchase(cartItem);

        if (!added)
        {
            cout << "Error: You have exceeded the limit of allowed purchases." << endl;
            break;
        }
        // ask user to input next purchased item name and cost
        cout << "Would you like to purchase another item? ";
        cin >> choice;


    }
    // call cart object’s function to calculate and display total cost

    userCart.printTotal();


    return 0;
}
