#include <iostream>
#include <cmath>
using namespace std;

int count(int n) {
    int cnt = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

bool isArmstrong(int n) {
    int numDigits = count(n); 
    int sum = 0;
    int duplicate = n;

    while (duplicate > 0) {
        int lastDigit = duplicate % 10;
        sum += round(pow(lastDigit, numDigits));
        duplicate = duplicate / 10;
    }

    return (sum == n);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is NOT an Armstrong number." << endl;
    }

    return 0;
}

/*
OUTPUT : 
Enter number: 371
371 is an Armstrong number.
*/
