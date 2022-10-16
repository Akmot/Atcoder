#include<bits/stdc++.h>
#include<string>
#define REP(i,N) for (int i=0;i<(N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

int main(){
    std::string x;
    cin >>x;
    int dotpos=x.find(".");
    std::string out;
    if (dotpos == -1){
        cout <<x;
    }else{
        out=x.substr(0,dotpos);
        cout <<out <<endl;
    }
    
}