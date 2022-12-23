#include <iostream> 

using namespace std;

/*
The idea is to take in a positive number
    - divide it by 2 if even 
    - multiply by 3 and add 1 when odd

The process repeats until the resulting value is 1
*/

int main(){
    long long i;
    cin >> i;

    //Takes in the intial value, which is manipulated throughout the program 

    while(i != 1){
        //Continue the loop if the value of i is not 1
        cout << i << " ";
        
        if(i % 2 == 0){
            //Checks if the number i is even or odd
            //There is no remainder when an even number is divided by 2 
            i = i/2;

            //Divides the number i by 2 if even 

        }
        else{
            i = i * 3 + 1;

            //NUmber has to be either even or odd 
            //If number is odd, multiply it by 3 and add 1 
        }
    }
    cout << i << endl;
}