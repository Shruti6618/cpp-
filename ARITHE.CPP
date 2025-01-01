#include <iostream.h>

int main() {
    int num1 = 10, num2 = 5;
    int *ptr1 = &num1, *ptr2 = &num2;
    
    int sum = *ptr1 + *ptr2;
    int difference = *ptr1 - *ptr2;
    int product = *ptr1 * *ptr2;
    int quotient = *ptr1 / *ptr2;
    
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    
    return 0;
}
