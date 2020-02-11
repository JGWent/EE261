#include<iostream>

using namespace std;


const int N = 11;
//bool taken 
bool tradeup(int Woman[N][N], int girl, int currentguy, int Newguy);

int main()
{
  
  int P = N;//number of pairs
  // These need to be adjusted by hand depending on how many people you have
  bool m[N] = { false,false,false,false,false, false ,false, false,false, false ,false };
  bool w[N] = { false,false,false,false,false, false, false, false,false, false ,false };
  int WE[N] = { 100,100,100,100,100,100,100,100,100,100,100 };
  int Men[N][N] = {{0,1,2,3,4,5,6,7,8,9,10},
		   {1,2,3,4,5,6,7,8,9,0,10},
		   {2,3,4,5,6,7,8,9,0,1,10},
		   {3,4,5,6,7,8,9,0,1,2,10},
		   {4,5,6,7,8,9,0,1,2,3,10},
		   {5,6,7,8,9,0,1,2,3,4,10},
		   {6,7,8,9,0,1,2,3,4,5,10},
		   {7,8,9,0,1,2,3,4,5,6,10},
		   {8,9,0,1,2,3,4,5,6,7,10},
		   {9,0,1,2,3,4,5,6,7,8,10},
		   {0,1,2,3,4,5,6,7,8,9,10}}; //Men[0][i] first guy, Men[1][i] second guy, Men[2][i] third same applies for woman. 
  int Woman[N][N] = { { 1,2,3,4,5,6,7,8,9,10,0 },
		      { 2,3,4,5,6,7,8,9,10,0,1 },
		      { 3,4,5,6,7,8,9,10,0,1,2 },
		      { 4,5,6,7,8,9,10,0,1,2,3 },
		      { 5,6,7,8,9,10,0,1,2,3,4 },
		      { 6,7,8,9,10,0,1,2,3,4,5 },
		      { 7,8,9,10,0,1,2,3,4,5,6 },
		      { 8,9,10,0,1,2,3,4,5,6,7 },
		      { 9,10,0,1,2,3,4,5,6,7,8 },
		      { 10,0,1,2,3,4,5,6,7,8,9 },
		      { 0,1,2,3,4,5,6,7,8,9,10 }};
  //int engaged[3][2];
  int currentguy;
  while (P > 0) {
    for (int guy = 0; guy < N; guy++) {
      //cout <<"guy"<<guy <<" "<< m[guy] << endl;
      if (m[guy] == false) {
	currentguy = guy;
	break;
      }
    }
    //cout << "second" << endl;
    for (int girl = 0; girl < N && m[currentguy] == false; girl++) {
      int currentgirl = Men[currentguy][girl];
      //cout << "girl" << currentgirl << " " << w[currentgirl] << endl;
      if (w[currentgirl] == false)
	{
	  m[currentguy] = true;
	  w[currentgirl] = true;
	  WE[currentgirl] = currentguy;
	  P--;
	  //cout << "Test" << endl;
	}
      else if (tradeup(Woman, currentgirl, currentguy,WE[currentgirl]) == true) {
	m[WE[currentgirl]] = false;
	WE[currentgirl] = currentguy;
	m[currentguy] = true;
	//cout << "tradeup" << endl;


      }


    }
  }


  cout << "Guy Girl" << endl;
  for (int i = 0; i < N; i++) {

    cout << WE[i] << "   " << i << endl;
  }
  

  cin.ignore(2);
  return 0;
}

bool tradeup(int Woman[N][N], int girl, int Newguy, int current) {

  for (int i = 0; i < N; i++) {
    //cout << "fun" << endl;
    //cout << "girl" << girl<< " " << "i" << i << endl;
    if (Woman[girl][i] == Newguy) {
      return true;
    }
    if (Woman[girl][i] == current) {
      return false;
    }
  }

};
