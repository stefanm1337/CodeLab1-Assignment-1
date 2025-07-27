#include<iostream>
using namespace std;

string EvenorOdd(int num){ // function checking if number is even or odd
    if(num%2==0){ // checking if number is divisible by 2
        return "Your number is even"; // if number is divisible by 2 then it is even
    }else{
        return "Your number is odd"; // if number is not divisible by 2 then it is odd
    }
}


int main(){ // main function
    int n; // variable to store user imput
    cout<<"Enter a number: "; 
    cin>>n; // takes the user input

    string message=EvenorOdd(n); // calling the function to check if n is even or odd
    cout<<message<<endl; // prints the result of the function

    return 0;
}