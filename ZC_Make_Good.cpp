#include <bits/stdc++.h>
using namespace std;
const long long mod = (long long)1e9 + 7;
#define int long long
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // This is a greedy problem which uses the principle of Xor operation
    // Xor of two same numbers is always 0
    // we can add two numbers to the array
    // let the xor of original array be x and sum of original array be s
    // we need to make s'=2*x'
    // s' is new sum and x' is new xor
    // (s+y+z)=2*(x^y^z)
    // let's put y=x   =>  (s+x+z)=2*(x^x^z)
    // s+x+z= 2*(0^z)  as 0^A=A
    // s+x+z=2*z  so,z=s+x
    // so LHS=RHS
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int x=0,s=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            x^=v[i];
            s+=v[i];
        }
        // u can also use accumulate function to find sum
        if(2*x==s){
            // if they are already equal no ops is required
            cout<<0<<'\n';
            cout<<'\n';
        }
        else{
            cout<<2<<'\n';
            cout<<x<<" "<<x+s<<'\n';
        }
    }
}
