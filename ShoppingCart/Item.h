#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using std::string;

class Item
{
public:
    Item();
    Item(string name, double price);
    string getItemName();
    double getItemPrice();
private:
    string itemName;
    double itemCost;
};

#endif
