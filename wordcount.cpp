#include <iostream>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;

int main(){
  char c;
  int numlines =0;
  int wordcount =0;
 cout<<"Enter some text"<<endl; 
 while ((c = getchar()) != EOF){
   if(c == '\n'){
     numlines++;
   }
   if(c ==' '){
     wordcount++;
   }
 }
 cout<<"Numlines: "<<numlines<<endl;
 cout<<"WordCount: "<<wordcount+1<<endl;
return(0);
}
