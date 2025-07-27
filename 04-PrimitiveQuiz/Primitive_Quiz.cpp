#include<iostream>
using namespace std;

int main(){
    string answer; // variable to store user input for the capital of a country
    string countries[]={"France", "Germany", "Italy", "Spain", "Netherlands", // array of countries
        "Poland", "Sweden", "Austria", "Belgium", "Greece"};
    string capitals[]={"Paris", "Berlin", "Rome", "Madrid", "Amsterdam", // array of capitals corresponding to the countries
        "Warsaw", "Stockholm", "Vienna", "Brussels", "Athens"};
    
    for(int i=0; i<10; i++){ // loop through each country and its corresponding capital
        cout<< "what is the capital of " <<countries[i]<< "?" <<endl; // prompt user for the capital of the country
        cin>>answer; // take user input for the capital
        if(answer==capitals[i]){ // check if the user's answer matches the correct capital
            cout<<"Correct!"<<endl; // if the answer is correct, print a success message

        }else{
            cout<<"Incorrect! The capital of " <<countries[i]<< " is " <<capitals[i]<< "."<<endl; // if the answer is incorrect, print the correct capital
        }
    }
    

    return 0;
}