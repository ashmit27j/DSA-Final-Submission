#include <iostream>
using namespace std;
int main(){
    int arr[5], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (int i = 0; i <= size; i ++){
        if(arr[i] == key){
            cout << "Element found at position: " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}