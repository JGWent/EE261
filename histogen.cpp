#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  cout<<"enter text and when done press enter then control d"<<endl;
  string text;
  vector<string> vtext;
  vector<string>checked;
  while(cin>>text){
    vtext.push_back(text);
  }

  int s = vtext.size();
  int counter = 0;
int i =0;  
//  cout<<"second spot: "<<vtext[2]<<endl; 
  for(int k=0;k<s;k++){    
    for(int i =0; i<s;i++){
      if(vtext[k]==vtext[i]){
	counter++;
	vtext.erase(vtext.begin()+i);
      }
    }
      cout<<vtext[k]<<":";
      for(int j=0;j<counter;j++){
	cout<<"*";
      }
      cout<<endl;
      counter = 0;
      checked.push_back(vtext[k]);      
  }
}
