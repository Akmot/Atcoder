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
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;

    cin >> a1 >> a2 >> a3;

    int max, min, mid, tmp;

    // 並べ替え．
    if (a2 < a1){
        min = a2;
        max = a1;
    } else{
        max = a2;
        min = a1;
    }

    if (a3 < min){
        tmp = min;
        min = a3;
        mid = tmp;
    }
    else if (max < a3){
        tmp = max;
        max = a3;
        mid = tmp;
    }
    else {
        mid = a3;
    }

    if ((mid - min) == (max - mid)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}