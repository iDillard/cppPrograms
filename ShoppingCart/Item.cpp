#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

//Constructor 
Item::Item() {

    itemName = "";
    itemCost = 0.00;
}

Item::Item(string name, double cost) {

    itemName = name;
    itemCost = cost;
}

// accessors 

string Item::getItemName() {

    return itemName;
    
}

double Item::getItemPrice() {

    return itemCost;

} 