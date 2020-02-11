#include <iostream>

using namespace std;

int main(){
  cout<<"Enter a integer greater then 1: ";
  int n;
  cin>>n;
  cout<<"Factors of n: ";
  for(int i=1; i<=n; i++){
    if(i==n)
      cout<<i<<endl;
    else if(n%i==0)
      cout<<i<<", ";
  }
  cout<<endl;

  return(0);
}
