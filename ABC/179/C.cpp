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
    int N;
    cin >>N;
    int cou=0;
    for (int i=1;i<(N); ++i){
        for (int w=1;w<(N-i+1); ++w){
            if ((N-i)%w==0){
                cou+=1;
            }
        }
    }
    cout <<cou<<endl;
}