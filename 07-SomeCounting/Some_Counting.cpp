#include <iostream>
using namespace std;

int main() {
    // Loop 1: Count up from 0 to 50 in increments of 1
    cout<<"Loop 1: Count up from 0 to 50"<<endl;
    for(int i=0; i<=50; i++) {
        cout<<i<<endl;
    }

    // Loop 2: Count down from 50 to 0 in decrements of 1
    cout<<"Loop 2: Count down from 50 to 0"<<endl;
    for(int i=50; i>=0; i--) {
        cout<<i<<endl;
    }

    // Loop 3: Count up from 30 to 50 in increments of 1
    cout<<"Loop 3: Count up from 30 to 50"<<endl;
    for(int i=30; i<=50; i++) {
        cout<<i<<endl;
    }

    // Loop 4: Count down from 50 to 10 in decrements of 2
    cout<<"Loop 4: Count down from 50 to 10 by 2"<<endl;
    for(int i=50; i>=10; i-=2) {
        cout<<i<<endl;
    }

    // Loop 5: Count up from 100 to 200 in increments of 5
    cout<<"Loop 5: Count up from 100 to 200 by 5"<<endl;
    for(int i=100; i<=200; i+=5) {
        cout<<i<<endl;
    }

    return 0;
}