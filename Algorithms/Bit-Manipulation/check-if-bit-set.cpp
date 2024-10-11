#include <iostream>

using namespace std;

// Time Complexity : O(1)
// Space Complexity : O(1)

int main(){
    int n, pos;
    cin>>n>>pos;
    // Using Right Shift Operator
    if(n>>pos & 1){
        cout<<"Yes: Bit is Set"<<endl;
    }
    else{
        cout<<"No : Bit is Unset"<<endl;
    }

    // Using Left Shift Operator

    if (n & (1<<pos)){
        cout<<"Yes: Bit is Set"<<endl;
    }
    else{
        cout<<"No : Bit is Unset"<<endl;
    }

}