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
    string str;
    cin >> str;
    if (str == "Sunny"){
        cout << "Cloudy" << endl;
    }else if(str == "Cloudy"){
        cout << "Rainy" << endl;
    }else if(str == "Rainy"){
        cout << "Sunny" << endl;
    }   
}