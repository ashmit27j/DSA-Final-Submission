//Implementation of various array operations like traversal, insertion and deletion using any real-life application.
//using all types of insertion, deletion, and traversal
#include <iostream>
using namespace std;
void traversal( int arr[], int size )
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertAtStart( int arr[], int size, int element )
{
    for (int i = size; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = element;
}

void insertAtEnd( int arr[], int size, int element )
{
    arr[size] = element;
}

void insertAtPos( int arr[], int size, int element, int pos )
{
    //loop runs till the position is encountered
    for (int i = size; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
}

void deleteAtStart( int arr[], int size )
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void deleteAtEnd( int arr[], int size )
{
    arr[size - 1] = 0;
}

void deleteAtPos( int arr[], int size, int pos )
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main(void)
{
    int size, i, choice, inp, pos;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size+1];
    for (i = 0; i < size; i++)
    {
        cout << "Enter the element at position " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter your choice:\n1. Traversal\n2. Insertion\n3. Deletion\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        //Insert at begginning
        cout << "enter element to insert at beggining\n";
        cin >> inp;
        insertAtStart(arr, size, inp);
        break;
    case 2:
        //Insert at end
        cout << "enter element to insert at end\n";
        cin >> inp;
        insertAtEnd(arr, size, inp);
        break;
    case 3:
        //Insert at pos
        cout << "enter element to insert at pos\n";
        cin >> inp;
        cin >> pos;
        insertAtPos(arr, size, inp, pos);
        break;
    case 4:
        // Delete at start
        cout << "delete at beggining\n";
        deleteAtStart(arr, size);
        break;
    case 5:
        // Delete at end
        cout << "delete at end\n";
        deleteAtEnd(arr, size);
        break;
    case 6:
        // Delete at pos
        cout << "delete at position\n";
        deleteAtPos(arr, size, pos);
        break;
    default:
        cerr << "Invalid choice\n";
        break;
    }
    return 0;
}