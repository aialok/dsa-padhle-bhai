#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<"Before Removing the last set bit: "<<n<<endl;

    // My-Solution
    // for(int i=0;i<32;i++){
    //     if(n&(1<<i)){
    //         n = n ^ (1<<i);
    //         break;
    //     }
    // }

    // Real solution

    n = n & (n-1);

    cout<<"After removing last setbit: "<<n<<endl;
}