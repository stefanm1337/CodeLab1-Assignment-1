#include<iostream>
using namespace std;

int main(){
    int password=12345; // predefined password
    int attempts=5; // number of attempts allowed
    int input; // variable to store user input
     while(attempts > 0){
        cout<<"Enter password: ";
        cin>>input; // taking user input

        if(input==password){
            cout<<"Welcome to the Secure Area"<<endl; // if password is correct
            break; // exit the loop
        }
        else{
            attempts--; // decrement attempts
            if(attempts > 0){
                cout<<"Incorrect password. You have "<<attempts<<" attempts left."<<endl; // shows if password is incorrect and how many attempts are left
            } else {
                cout<<"Maximum attempts reached. Authorities have been alerted!"<<endl; // if no attempts are left
            }
        }
     }

    return 0;
}