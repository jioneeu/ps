#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) {
  return a>b?a:b;
}
int main(void) {
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b && b==c) cout<<10000+a*1000;
  else if(a==b || a==c || b==c) {
    if(a==b || a==c) cout<<1000+a*100;
    else cout<<1000+b*100;
  } else {
    cout<<max(a, max(b,c))*100;
  }
}
