#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isPalindrome(const char*);

int main(void){
  char c[100];
  bool pal;
  cout<<"Enter a word or sentence and press control d when finished. \n:";
  cin>>c;
  pal = isPalindrome(c);
  if(pal ==true)
    cout<<c<<" is a palindrome."<<endl;
  else
    cout<<c<<" is not a palindrome."<<endl;

}

bool isPalindrome(const char* a){
  int L = strlen(a);
  int i =0;
  bool Y;
  do{
    cout<<i<<" "<<L-1<<endl;
    if(a[i]==a[L-1]){
	i++;
	L--;
	Y =true;
      }
      else{
       cout<<i<<" "<<a[i]<<" "<<L-1<<" "<<a[L-1]<<endl;
	return false;
	break;
      }

  }while(i<=L-1);
  if(Y==true)
    return true;
}
