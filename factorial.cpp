#include <iostream>
using namespace std;

int fact(int n){
  int facto=1;
  for(int i=1;i<=n;i++){
    facto=facto*i;
  }
  return facto;
}

int main(){
  
  int n;
  int r;
   cin>>n;
   cin>>r;
  
  int num=fact(n);
  int denom=fact(r)*fact(n-r);
  
  int ans=num/denom;
  
  cout<<ans;
}
