#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin >> str;
    int size = str.length();
    char stack[size];
    int top = -1;
    char reverse[size];
    for ( int i=0; i < size; i++ )
    {
        stack[i] = str[i];
        top++;
    }
    // for ( int i=0; i < size; i++ )
    // {
    //     reverse[i] = stack[top];

    // }
    for ( int i=top; i > -1; i-- )
    {
        cout << stack[i];
    }
}