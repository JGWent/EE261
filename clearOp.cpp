#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
 
int main(int argc, char** argv) {
  if (argc != 2) {
    cerr<<"usage: weirdOp a_string"<<endl;
    return 1;
  }
  int slen = strlen(argv[1]);
  char* str = new char[slen];
  int i = slen-1;
  while (i>=0){
    str[i--] = *argv[1]++;
  }
  cout<<str<<endl;
}
