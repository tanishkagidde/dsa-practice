#include <iostream>
using namespace std;

const int MAX = 5;
int stack[MAX];
int top = -1;
int value;

void push()
{
    if (top == MAX - 1) {
        cout << "STACK OVERFLOW !" << endl;
        return;
    }

    cout << "Enter Value to be inserted: ";
    cin >> value;

    top++;
    stack[top] = value;

    cout << value << " inserted successfully." << endl;
}

void pop()
{
    if (top == -1) {
        cout << "STACK UNDERFLOW !" << endl;
        return;
    }

    cout << stack[top] << " deleted successfully." << endl;
    top--;
}

void peek()
{
    if (top == -1) {
        cout << "STACK IS EMPTY" << endl;
        return;
    }

    cout << "Top element is: " << stack[top] << endl;
}

void display()
{
    if (top == -1) {
        cout << "STACK IS EMPTY" << endl;
        return;
    }

    cout << "Stack elements : ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice;

    do {
        cout << "\n====== STACK MENU ======" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exited" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}

/*
OUTPUT :
====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter Value to be inserted: 10
10 inserted successfully.

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter Value to be inserted: 20
20 inserted successfully.

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter Value to be inserted: 39
39 inserted successfully.

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 2
39 deleted successfully.

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 3
Top element is: 20

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 4
Stack elements : 20 10 

====== STACK MENU ======
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 5
Exited
*/
