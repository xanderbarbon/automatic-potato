#include <iostream>
using namespace std;

// Function to perform arithmetic operations
void calculateAndDisplay(int num1, int num2) {
    // Perform calculations and display results
    cout << "The sum of two numbers is: " << num1 + num2 << endl;
    cout << "The difference of two numbers is: " << num1 - num2 << endl;
    cout << "The product of two numbers is: " << num1 * num2 << endl;
    cout << "The quotient of two numbers is: " << (num2 != 0 ? num1 / num2 : 0) << endl;
    cout << "The modulus of first number is: " << (num2 != 0 ? num1 % num2 : 0) << endl;
}

int main() {
    // Using string data type to be able to enter letters
    string name;
    // Using variables to store 2 numbers
    int num1, num2;

    // Asking the user to input name
    cout << "Enter the name of the user: ";
    cin >> name;
    cout << "Hello " << name << "\n\n";

    // Asking the user to input 2 numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Call the function to perform calculations
    calculateAndDisplay(num1, num2);

    return 0;
}
