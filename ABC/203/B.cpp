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
    int N, K;
    cin >>N >>K;

    // 部屋番号
    int num = 0;
    for (int i = 1; i <= K; i++) {
        num += i;
    }
    num = num * N;

    // 階番号
    int floor = 0;
    for (int i = 1; i <= N; i++) {
        floor += i * 100 * K;
    }

    int sum;
    sum = num + floor;

    cout << sum << endl;
    return 0;
}