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
  vector<int> N(6);
  REP(i, 6) cin >> N[i];

  int A = N[0];
  int B = N[1];
  int C = N[2];
  int D = N[3];
  int E = N[4];
  int F = N[5];

  long long result = A*B*C - D*E*F;
  int remainder = result % 998244353;

  cout <<remainder<<endl;
  return 0;
}