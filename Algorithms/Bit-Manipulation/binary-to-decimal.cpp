#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n){
    string bin = to_string(n);
    reverse(bin.begin(), bin.end());
    int ans=0;
    int p2=1;
    for(int i=0;i<bin.length(); i++){
        ans+= p2*(bin[i]-'0');
        p2*=2;
    }

    return ans;
}

int main(){
    int binary;
    cin>>binary;

    cout<<binaryToDecimal(binary)<<endl;
    return 0;
}