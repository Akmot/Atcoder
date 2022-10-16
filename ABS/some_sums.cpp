#include<bits/stdc++.h>
#define REP(i,N) for (int i=0;i<(N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

int main(){
    int N,A,B,j,val;
    cin >>N>>A>>B;
    int sum=0;
    REP(i,N){
        j=i+1;
        val=0;
        while(j){
            val += (j%10);
            j /= 10;
        }
        if(A<=val && val<=B){
            sum+=i+1;
        }
    }
    cout <<sum<<endl;
    return 0;
}