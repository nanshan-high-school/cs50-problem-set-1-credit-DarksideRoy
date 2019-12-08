#include <iostream>
using namespace std;
// 271 25 655249

int main() {
    long long num;
    cout << "Enter your credit card number:";
    cin >> num;

    int firstTwo;
    int i = 0;
    do {
        i++;
        num /= 10; 
        if (num < 100 && num > 10) {
            firstTwo = num;
        } 
    } while (num > 0);
    int length = i;    

    int total = 0, j = 0;
    for (; i > 0; i--) {
        j++;        
        if (j % 2 == 1) {
            total += num % 10;            
        } else if (j % 2 == 0) {
            total += num % 10 * 2; 
        }
        num /= 10;
    }

    if (total % 10 != 0) {
        cout << "It's not a available credit card number.";
    }

    if (length == 15 && (firstTwo == 34 || firstTwo == 37)) {
        cout << "American Express";
    } else if (length == 16 && (firstTwo > 50 && firstTwo < 56)) {
        cout << "MasterCard";
    } else if ((length == 15 || length == 16) && firstTwo / 10 == 4) {
        cout << "Visa";
    } else {
        cout << "It's not a available credit card number.";
    }
}
