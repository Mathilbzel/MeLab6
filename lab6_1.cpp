#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    while(x!=0){
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
