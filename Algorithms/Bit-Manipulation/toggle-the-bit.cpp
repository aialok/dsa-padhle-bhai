#include <iostream>
using namespace std;

int main(){
    int n, pos;
    cin>>n>>pos;
    cout<<"Before Toggle: "<<n<<endl;
    n = n ^ (1<<pos);
    cout<<"After Toggle: "<<n<<endl;

}