#include "Item.h"
#include<string>
using namespace std;

class Cart
{
public:
    Cart(string cartName);
    bool Purchase(Item purchasedItem);
    void printTotal();
private:
    string _name;
    int _count;
    Item _arr[100];
};

