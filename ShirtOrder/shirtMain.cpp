// Isaiah Dillard
// 09/29/2022
// Shirt ordering program


# include <iostream>
# include <iomanip>
using namespace std;

// get inputs from the user and declare variables for referencing
void getInputs(double &itemPrice, double &discount,  int &numItems ){

    cout << "Original price: ";
    cin >> itemPrice;

    cout << "Discount Rate: ";
    cin >> discount;

    cout << "Number Ordered: ";
    cin >> numItems;

}

// assing variables for referencing
void calculate( double itemPrice, double discount, int items, double &originalPrice, double &discountRate, double &subtotal, double &saleTotal, double &taxes){

    const double taxRate = 0.07;
    const double shipping = 3.99;
    double discountPrice;


    originalPrice = itemPrice * items;
    discountRate = discount / 100;
    
    discountPrice = originalPrice * discountRate; 

    // calculate subtotal 
    subtotal = originalPrice - discountPrice;

    // calculate taxes
    taxes = subtotal * taxRate;

    // calculate total
    saleTotal = subtotal + taxes + shipping;

    
}

// take in constraints and use them
// assign more vairables for references
void display(double originalPrice, double discountRate, int itemsOrdered, double subtotal, double taxes, double saleTotal){

    cout <<endl;
    cout << "Origianl price: $" << originalPrice << endl;
    cout << "Discount Rate: " << discountRate << endl;
    cout << "Number ordered: " << itemsOrdered << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << fixed << setprecision(2) << taxes << endl;
    cout << "Shipping and handling: $3.99" << endl;
    cout << "Total Payment: $" << fixed << setprecision(2) << saleTotal << endl;
    cout << endl;

}

int main(){

    // varibale declaration
    // referenced variables need to be delcared here first
    double itemPrice;
    double originalPrice;
    double discount;
    double discountRate;
    double subtotal;
    double saleTotal;
    double taxes;
    int itemsOrdered;
    string checkout;

    // Preloop test
    cout << "Are you ready for checkout (Y or N)? ";
    cin >> checkout;

    while (checkout == "Y"){

        getInputs(itemPrice, discount, itemsOrdered);

        calculate(itemPrice, discount, itemsOrdered, originalPrice, discountRate, subtotal, saleTotal, taxes);

        display(itemPrice, discount, itemsOrdered, subtotal, taxes, saleTotal);

        // test to continue or end loop
        cout << "Are you ready for checkout (Y or N)? ";
        cin >> checkout;

    }
    
    return 0;

}