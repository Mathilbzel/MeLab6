#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
        y = y+1 ;
        }
        else{
        z = z+1 ;
        }
    }
    cout << "#Even numbers = "<< y;
    cout << "#Odd numbers = "<< z ;
    }
    return 0;
}
