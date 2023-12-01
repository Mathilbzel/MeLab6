#include<iostream>
using namespace std;

int main(){
    while(x!=0){
    int x,y,z;
    cout << "Enter an integer: ";
    cin >> x;
        if(x%2==0){
        y = y+1 ;
        }
        else{
        z = z+1 ;
        }
    }
    cout << "#Even numbers = "<< y;
    cout << "#Odd numbers = "<< z ;
    return 0;
}
