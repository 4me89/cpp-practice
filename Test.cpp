#include <iostream>
#include <string>
using namespace std;

int main() {
    string SuperMarket = " -- SuperMarket -- ";
    cout << SuperMarket << endl;
    cout << "Welcome to the " << SuperMarket << "!" << endl;

    string Products[5] = {"Milk", "Bread", "Eggs", "Cheese", "Butter"};
    int selectedProduct;

    cout << "What Would You Like to Buy: " ;
    cin >> selectedProduct;

    if (selectedProduct == 0) {
        cout << "You have selected " << Products[0] << endl;
    }
    else if (selectedProduct == 1) {
        cout << "You have selected " << Products[1] << endl;
    }
    else if (selectedProduct == 2) {
        cout << "You have selected " << Products[2] << endl;
    }
    else if (selectedProduct == 3) {
        cout << "You have selected " << Products[3] << endl;
    }
    else if (selectedProduct == 4) {
        cout << "You have selected " << Products[4] << endl;
    }
    else {
        cout << "Sorry, we don't have that product." << endl;
    }
}