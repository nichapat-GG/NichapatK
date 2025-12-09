#include<iostream>
using namespace std;

int main(){
    int integer;
        cout << "Enter an integer: ";
        cin >> integer;
    int EvenNum = 0;
    int OddNum = 0;
    while(integer != 0){
    if(integer%2 == 0){
        EvenNum++;
    }else{
        OddNum++;
    }
    cout << "Enter an integer: ";
    cin >> integer;
}
cout << "#Even numbers = "<< EvenNum <<"\n";
cout << "#Odd numbers = " << OddNum <<"\n";
    return 0;
}
