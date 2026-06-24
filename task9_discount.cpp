#include <iostream>
using namespace std;

int main() {
    double price;
    cin >> price;
    if(price > 1000) price *= 0.95;
    else if(price > 500) price *= 0.97;
    cout << price;
    return 0;
}