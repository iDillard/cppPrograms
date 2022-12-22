#include <iostream>
#include <string>
#include <iomanip>

#include "Cart.h" // import cart header file
#include "Item.h" // import item header file 

using namespace std;

// Constructors

Cart::Cart(string name) {

    _name = name; // name of cart 
    _count = 0; // initial number of items in cart

}

bool Cart::Purchase(Item item) {

    if(_count < 100) {
        _arr[_count] = item;
        _count++;
        return true;

    } else {

        return false;

    }

}

void Cart::printTotal() {

    double total = 0.0; // create an empty total

    for(int i = 0; i < 100; i++){

        total += _arr[i].getItemPrice();

    }
    cout << total;
}
