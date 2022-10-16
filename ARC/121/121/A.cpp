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

    vector<int> x(N), y(N);
    REP(i,N) cin >>x[i] >>y[i];
    vector<int> distance;

    for (int i = 0; i < N; i++){
        for (int j = 0; i < N; j++){
            // ループ処理
            if (i != j){
                distance.push_back(max(abs(x[i] - x[j]), abs(y[i] - y[j])));
            }
        }
    }
    sort(ALL(distance),greater<int>());
    cout << distance[1] << endl;
    return 0;
}