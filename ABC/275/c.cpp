#include<bits/stdc++.h>
#define REP(i,N) for (int i=0;i<(N); ++i)
#define ALL(x) (x).begin(), (x).end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}

// 未解決
int main(){
  // 要素取得(9*9)
  vector<vector<int>> data(9,vector<int>(9));
  REP(i,9) {
    REP(j,9) {
      cin >> data.at(i).at(j);
    }
  }
}