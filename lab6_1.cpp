#include<iostream>
using namespace std;

int main(){
    int x,y=0,z=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
        y = y+1 ;
        }
        else{
        z = z+1 ;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    cout << "#Even numbers = "<< y <<"\n";
    cout << "#Odd numbers = "<< z ;
    return 0;
}
