#include <iostream> 

using namespace std;

/*
The idea is to input an amount of positive numbers one less than 
a number n
    - All numbers should be different 
    - All numbers have to be less than or equal to number n
    - Try to find the missing number in the sequence
        - Including the number n 
*/

int main(){
    long long n;
    cin >> n;

    //Take in a number n
    //Number n is the theoretical numbers in the sequence
    //Remember the user inputted sequence is 1 less than the number n 

    long long falseSum = 0;
    //Define a falseSum value which is the sum of variables in sequence
    //Sum of all variables minus the missing number 

    for(int i = 1; i < n; i++){
        //Code for inputting values into the sequence 
        //Start at i = 1
        //Number of values in the sequence are 1 less than number n 

        long long temp = 0;
        cin >> temp;
        //User inputted value is set as a temp variable 

        falseSum = falseSum + temp;
        //False sum value increases with each value in the sequence 
    }

    long long trueSum = (n + 1) / 2.0 * n;
    //Sum of all values up to number n
    //This is the sum of all values in sequence including the missing number

    cout << trueSum - falseSum << endl;
    //Return the missing number
}