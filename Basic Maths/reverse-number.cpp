#include <iostream>
using namespace std;

int reverse(int n) {

    int revNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
       revNum=(revNum*10)+lastDigit;
       n=n/10;
    }
    return revNum;
}

int main() {
    int n;
    cout<<"Enter number : "<<endl;
    cin >> n;
    cout <<"Reverse Number = "<<reverse(n);
    return 0;
}

/*
OUTPUT :
Enter number : 
123456789
Reverse Number = 987654321
*/
