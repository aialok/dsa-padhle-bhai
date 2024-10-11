#include <iostream>
#include <map>
using namespace std;

int fib(int n, int arr[]){
    if(n == 0 || n==1){
        return 0;
    }

    if(n == 2){
        return 1;
    }

    if(arr[n] != 0){
        return arr[n];
    }
    
    cout<<"Calculating fib("<<n<<")"<<endl;
    arr[n] = fib(n-1, arr) + fib(n-2, arr);
    cout<<"Done calculating fib("<<n<<")"<<endl;

    return arr[n];


}

int main(){
    int n;
    cin >>n;
    int mem[n+1]{0};
    cout<<fib(n, mem)<<endl;
}