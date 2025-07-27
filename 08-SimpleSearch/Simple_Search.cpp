#include<iostream>
using namespace std;

int main(){ // main function
    string names[]={"Jake","Zac", "Ian", "Ron", "Sam","Dave"}; // array of names to search from
    string searchName; // variable to store the name to search
    cout<<"Enter a name to seach: "; 
    cin>>searchName; // takes the user input for the name to search
    
    for(int i=0; i<6; i++){ // loop through the array of names
        if(names[i]==searchName){ // check if the current name matches the search name
            cout<<"Your name is found at index: "<<i<<endl; // if found, print the index
            break; // exit the loop if name is found
        }else if(i==5){
            cout<<"Your name is not in the list"<<endl; // if loop completes without finding the name, print not found message
            break;
        }
    }

    return 0;
}
