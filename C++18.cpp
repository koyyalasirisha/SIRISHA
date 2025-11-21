#include <iostream>
using namespace std;

void display(int num) {
    cout << "Displaying int: " << num << endl;
}

void display(double num) {
    cout << "Displaying double: " << num << endl;
}

void display(int num1, int num2) {
    cout << "Displaying two ints: " << num1 << " and " << num2 << endl;
}

int main() {
    display(5);         // Calls the int version
    display(5.5);       // Calls the double version
    display(10, 20);    // Calls the version with two ints
    return 0;
}

