#include<iostream>
using namespace std;

const int MAX = 5;
int queue[MAX];
int front = -1;
int rear = -1;
int value;

void enqueue()
{
    if(rear == MAX - 1){
        cout << "QUEUE IS FULL" << endl;
        return;
    }

    cout << "Enter Value to be inserted: ";
    cin >> value;

    if(front == -1){
        front = 0;
    }

    rear++;
    queue[rear] = value;

    cout << value << " inserted successfully." << endl;
}

void dequeue()
{
    if(front == -1 || front > rear){
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }

    cout << queue[front] << " deleted successfully." << endl;

    front++;

    if(front > rear){
        front = rear = -1;
    }
}

void display()
{
    if(front == -1 || front > rear){
        cout << "QUEUE IS EMPTY" << endl;
        return;
    }

    cout << "Queue: ";

    for(int i = front; i <= rear; i++){
        cout << queue[i] << " ";
    }

    cout << endl;
}

int main()
{
    int choice;

    do{
        cout << "\n====== QUEUE MENU ======" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}

/* output:
====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter Value to be inserted: 10
10 inserted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter Value to be inserted: 20
20 inserted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter Value to be inserted: 30
30 inserted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
10 deleted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 2
20 deleted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter Value to be inserted: 40
40 inserted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 1
Enter Value to be inserted: 50
50 inserted successfully.

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 3
Queue: 30 40 50 

====== QUEUE MENU ======
1. Enqueue
2. Dequeue
3. Display
4. Exit
Enter your choice: 4
Exiting...*/
