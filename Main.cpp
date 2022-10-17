#include <iostream>
using namespace std;

void check(int code) {
    if (code>=100 && code<=200) 
        cout << "Subject found!";
    else cout << "Invalid!";
}

int main() {
    int code;
    cin >> code;
    check(code);
}
