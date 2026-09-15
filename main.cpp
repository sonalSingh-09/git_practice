#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "arithmetic opersations" << endl;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    cout << "For division of two numbers, the second number should not be zero" << endl;
    cout << "Sum of " << a << " and " << b << "= "<<a+b<< endl;
    
    cout << "Difference of " << a << " and " << b << "= "<<a-b<< endl;

    cout << "Product of " << a << " and " << b << "= "<<a*b<< endl;
    cout << "Division of " << a << " and " << b << "= "<<a/b<< endl;
    return 0;
}