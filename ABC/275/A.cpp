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
  vector<int> H(N);
  REP(i,N) cin >> H[i];

  int targetHight = -1;
  int targetIndex = -1;
  REP(i,N) {
    if (targetHight < H[i]) {
      targetHight = H[i];
      targetIndex = i;
    }
  }

  cout <<targetIndex+1<<endl;
  return 0;
}