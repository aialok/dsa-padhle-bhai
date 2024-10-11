#include <iostream>

using namespace std;

int main(){
    int dividend, divisor;
    cin>>dividend>>divisor;

    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    dividend = abs(dividend);
    divisor = abs(divisor);

    int count = 0;

    while(dividend >= divisor){
        dividend -= divisor;
        count++;
    }



    cout<<sign*count<<endl;
}