#include<iostream>
using namespace std;
bool binarySearch(int low, int high, int arr[], int size, int target)
{
    int mid;
    if (low <= high)
    {
        mid = (low+high) / 2;	
        if (arr[mid] == target)
            return true;
        else if ( arr[mid] < target )
            binarySearch(mid + 1, high, arr, size, target);
        else
            binarySearch(low, mid - 1, arr, size, target);
    }
    return false;
}
int main()
{
    int size, value;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout << "Enter the element to be found: ";
    cin >> value;
    binarySearch(0, size-1, arr, size, value)?cout<<"Element found":cout<<"Element not found";
    return 0;
}