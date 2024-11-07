#include<iostream>
using namespace std;
int main()
{
    int queue[100], front = -1, rear = -1, size, choice, value;
    cout << "Enter the size of the queue: ";
    cin >> size;
    while (true)
    {
        cout << "Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if(rear == size - 1)
                cout << "Queue is full!" << endl;
            else{
                cout << "Enter ele you want to enqueue: " << endl;
                cin >> value;
                rear++;
                queue[rear] = value;
            }
        break;
        case 2:
            if(front == -1)
                cout << "Queue is empty!" << endl;
            else{
                cout << "Element to be dequeued: " << queue[front] << endl;
                if( front == rear )
                    front = rear = -1;
                else
                    front++;
            }
        break;
        case 3:
            for (int i = front; i <= rear; i ++ )
            {
                cout << queue[i] << " ";
            }
        break;
    }
    return 0;
}