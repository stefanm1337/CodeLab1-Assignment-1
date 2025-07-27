#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number of month you'll like to know the number of days in: ";
    cin>>a; //takes the user input for the month number

    switch(a){
        case 1: //january
        case 3: //march
        case 5: //may
        case 7: //july
        case 8: //august
        case 10: //october
        case 12: //december
            cout<<"31 days"<<endl;
            break;
        case 4: //april
        case 6: //june
        case 9: //september
        case 11: //november
            cout<<"30 days"<<endl;
            break;
        case 2: //february
            cout<<"28 or 29 days"<<endl; //february has either 28 or 29 days depending on whether it's a leap year or not.
            break;
        default:
            cout<<"Invalid month number"<<endl; //error message if the input is not between 1 and 12.
    }

    return 0;
}