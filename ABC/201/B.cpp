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
    // 入力受け取り
    int N;
    cin >> N;

    vector<int> T(N);
    vector<string> S(N);
    REP(i,N) cin >>S[i] >>T[i];

    // 比較用変数初期化
    int first = T[0];
    int second = 0;
    int first_num = 0;
    int second_num = 0;

    for (int i = 1; i < N; i++) {
        if (T[i] > first) {
            second = first;
            second_num = first_num;
            first = T[i];
            first_num = i;
        } 
        else if (T[i] > second) {
            second = T[i];
            second_num = i;
        }
    }

    cout <<S[second_num] << endl;
    return 0;
}