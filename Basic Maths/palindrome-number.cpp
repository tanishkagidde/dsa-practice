#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number : "<<endl;
    cin >> n;
    int revNum = 0;
    int duplicate = n;
    while (n > 0) {
        int lastDigit = n % 10;
       revNum=(revNum*10)+lastDigit;
       n=n/10;
    }
if (revNum==duplicate){
    cout<<"True"<<endl;
    }
else{
    cout<<"False"<<endl;
}
}

/*
OUTPUT: 
Enter number : 
5456856
False

Enter number : 
123321
True
*/
