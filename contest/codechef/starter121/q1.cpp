#include <iostream>
#include <vector>

using namespace std;
#define int long long
int m = 1000000007;

int power(int x, int y) {
    if (y == 0)
        return 1;
    int p = power(x, y / 2) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}


signed main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        string p, c;
        cin >> p >> c;

        vector < int > ans;
        int count = 0;

        for (int i = 0; i < n; i++) {
                
            
            //  cout<<p[i]-'A'+1<<endl;                
            
            while (p[i] != c[i]) {
                // cout<<p[i]-'A'+1<<endl;
                // cout<<char((p[i]-'A')%26+'A')<<endl;
                p[i] = p[i] + 3;
                p[i]=char((p[i]-'A')%26+'A');
                count++;
                cout<<p[i]<<endl;   
                if(p[i]==c[i]){
                    break;
                }
                // if()
                cout<<"Hello"<<endl;


            }

            ans.push_back(count);
            count = 0;


        }

        
        for(auto x : ans){
            cout<<x<<" ";
        }

        cout<<endl;

    }


    return 0;
}