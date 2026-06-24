#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, angle;
    cin >> v >> angle;
    double g = 9.8;
    double rad = angle * M_PI / 180;
    cout << (v*v * sin(2*rad)) / g;
    return 0;
}