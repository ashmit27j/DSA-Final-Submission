#include <iostream>
using namespace std;
class Queue{
private:
    int queue[5];
    int front, rear, size;
public:
    bool isFull(){
        return (rear + 1) % size == front;
    }
    bool isEmpty(){
        return front == -1;
    }
    void enqueue(int val){
        int value = val;
        if(!isFull()){
            cout << "enter element to be enQueued" << endl;
            cin >> value;
            if(rear == size-1 && front!=0){
                queue[rear] = value;
            }
            else if(front == -1){
                front = 0;
                rear++;
                queue[rear] = value;
            }
            else{
                rear++;
                queue[rear] = value;
            }
        }
        else
            cerr << "CQueue is full!" << endl;
    }
    void dequeue(){
        if(!isEmpty()){
            cout << "Element deleted: " << queue[front];
            if(front == rear)
                front = rear = -1;
            else if(front == 0 && rear != size-1){
                front = size - 1;
            }
            else{
                front++;
            }
        }
        else
            cerr << "CQueue is empty!" << endl;
    }
    void display(){
        if(front > rear){
            for (int i = front; i <= size - 1; i++){
                cout << queue[i] << "->";
            }
            for (int i = 0; i <= rear; i++){
                cout << queue[i] << "->";
            }
        }
        else{
            for (int i = front; i <= rear; i++){
                cout << queue[i] << "->";
            }
        }
    }
};
int main(){
    Queue queue(5);  // Create a circular queue of size 5

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    cout << "Queue after enqueuing 5 elements: ";
    queue.display();

    cout << "Dequeue: " << queue.dequeue() << endl;
    cout << "Queue after dequeue: ";
    queue.display();

    queue.enqueue(60);
    cout << "Queue after enqueuing 60: ";
}