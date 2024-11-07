#include<iostream>
using namespace std;
class Node{
private:
    int data;
    Node *next;
public:
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
    Node *head = nullptr;
    void insertAtStart(int value){
        Node *newnode = new Node(value);
        newnode->next = head;
        head = newnode;
    }
    void insertAtEnd(int value){
        Node *newnode = new Node(value);
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void insertAtPos(int value, int pos){
        Node *newnode = new Node(value);
        Node *temp = head;
        int counter = 0;
        while(temp->next != NULL){
            temp = temp->next;
            ++counter;
            if(counter == pos){
                temp->next = newnode;
                newnode->next = temp->next->next;
                return;
            }
        }
        cout << "pos not found";
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    Node obj;
    obj.insertAtStart(20);
    obj.insertAtStart(10);
    obj.insertAtEnd(30);
    obj.insertAtPos(40,1);
    obj.display();
}