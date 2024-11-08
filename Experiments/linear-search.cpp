#include <iostream>
using namespace std;
class LinearSearch{
private:
    int arr[5];
    int size;
public:
    void input(){
        cout << "Enter the size of the array: ";
        cin >> size;
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
    }
    bool search(int key){
        for (int i = 0; i <= size; i ++){
            if(arr[i] == key){
                cout << "Element found at position: " << i << endl;
                return true;
            }
        }
        cout << "Element not found" << endl;
        return false;
    }
};
int main(){
    LinearSearch obj;
    obj.input();
    int find;
    cout << "Enter the element to be searched: ";
    cin >> find;
    obj.search(find);
    return 0;
}