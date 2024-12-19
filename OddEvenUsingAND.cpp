#include <iostream>
using namespace std;

// bool isEven(int a){
//   if(a%2==0){
//     return 1;
//   }
//   return 0;
// } 
//another logic is using AND & operator
bool isOdd(int a){
  //koi bhi number ka AND 1 true ho toh :odd h
  if(a&1){
    return 0;
  }
  return 1;
} 

int main() 
{
    int n;
    cin>>n;
    
    if(isOdd(n)){
      cout<<"Even";
    }
    else{
      cout<<"odd";
    }
    
    return 0;
}