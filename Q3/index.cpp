#include<iostream>

using namespace std;

int main(){

    int number ;
    
    cout << "Enter Any Number: ";

    cin >> number;

    int ld = number % 10;

    while(number >= 10){
        number = number / 10;
    }
  cout << "The Sum of First And last Digit is : "<<number + ld;


}