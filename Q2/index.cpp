#include<iostream>

using namespace std;

int main(){

    int number ;
    cout << "Enter any number : ";
    cin >> number;

    int digit=0 ;

    while(number >=1){

        number/=10;
        digit++;

    }

cout<< digit;

}