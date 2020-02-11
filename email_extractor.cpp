#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inFile;
  string String;
  ofstream outFile;
  inFile.open("file.dat"); 
  outFile.open("addr.tmp");
  while (inFile>>String)
    {
      // inFile >> String; 
      //cout<<String.find('@')<<endl;
      if (String.find('@')<1000000) 
	{
	  outFile << String << '\n';
	}
      
    }
  inFile.close(); 
  outFile.close();
  return 0;
}
