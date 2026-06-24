#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int mid = len / 2;
    string left = s.substr(0, mid);
    string right = s.substr(len - mid);
    if(left == right)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}