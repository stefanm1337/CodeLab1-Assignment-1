#include<iostream>
#include<limits> //needed for numeric_limits and to check if the inputed age is valid
using namespace std;

int main(){
    string name1, name2, city;
    int age;
    cout<<"Enter your name: "<<endl;
    cin>>name1; //taking first name
    cin>>name2; //taking last name, using 2 cin statements to I can take both names separately and in 1 line
    cout<<"Enter your city: "<<endl;
    cin>>city; //taking city
    cout<<"Enter your age: "<<endl;
    while(true){
         cin>>age; //taking age
         if (cin.fail()){ //checking if the input is valid  
            cin.clear();  //clears the error flag on cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores the invalid input until a newline is found
            cout<<"Invalid input. Please enter a valid age: "<<endl; //error message if the input is invalid
         }
         else{ //stops the loop if the input is valid
            break;
         }
         
    }
    cout<<"Name: "<<name1<<" "<<name2<<endl<<"City: "<<city<<endl<<"Age: "<<age<<endl; //prints user details on new lines
    

    return 0;
}