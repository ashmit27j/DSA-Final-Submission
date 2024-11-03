#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void insertat(int arr[], int &size, int position, int value)
{
    for(int i=size;i > position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    size++;
}

void deleteat(int arr[], int &size, int position)
{
    for(int i = position; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}

int main()
{
    int arr[100];
    int size, choice, value, position;
    
    cout<<"Enter size of your array: ";
    cin>>size;
    
    cout<<"Enter " <<size<< " numbers of your array:" ;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Current array is: ";
    printarray(arr,size);
    
    while(true)
    {
        cout << "Menu:\n";
        cout << "1. Insert at first position\n";
        cout << "2. Insert at last position\n";
        cout << "3. Insert at specific position\n";
        cout << "4. Delete from first position\n";
        cout << "5. Delete from last position\n";
        cout << "6. Delete from specific position\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter the value: ";
                cin>>value;
                insertat(arr,size,0,value);
                break;
            case 2:
                cout<<"Enter the value: ";
                cin>>value;
                insertat(arr,size, size, value);
                break;
            case 3:
                cout<<"Enter the position: ";
                cin>>position;
                cout<<"Enter the value: ";
                cin>>value;
                if(position >= 0 && position <= size)
                {
                    insertat(arr, size, position, value);
                }
                else
                {
                    cout<<"Invalid Position";
                }   
                break;
            case 4:
                if(size > 0)
                {
                    deleteat(arr,size,0);
                }
                else
                {
                    cout<<"Array is empty.";
                }
                break;
            case 5:
                if(size > 0)
                {
                    deleteat(arr,size,size-1);
                }
                else
                {
                    cout<<"Array is empty.";
                }
                break;
            case 6:
                cout<<"Enter the position: ";
                cin>>position;
                if(position >= 0 && position < size)
                {
                    deleteat(arr, size, position);
                }
                else
                {
                    cout<<"Invalid Position";
                }   
                break;
            case 7:
                return 0;
            default:
                cout<<"Invalid Input";
        }
        cout<<"Current array: ";
        printarray(arr,size);
    }
}