#include <iostream>
using namespace std;

void fibonacci(int n){
  
  int ans=0;
  int a=0;
  int b=1;
  
  for(int i=0;i<=n;i++){
    cout<<ans<<" ";
    ans=a+b;
    a=b;
    b=ans;
  }
}

int main(){
  
  int n;
  cin>>n;
  
  fibonacci(n);
  

}