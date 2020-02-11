#include <iostream>
#include <cmath>

using namespace std;

void test1(int);
void test2(int);
void test3(int);

int main() {
  int x;

  //  bool isPrime = false;

  cout<<"Enter a natural number greater than 1 ";
  cin>>x;

  test1(x);
  test2(x);
  test3(x);
 return 0;
}

void test3(int z) {
  bool isPrime = true;
  int counter =0;

  if((z != 2) && (z % 2 == 0)) {
    counter;
    isPrime = false;
  }
  else {

    for (int i = 2; i < sqrt(z)+1; i++) {
      if (z % i == 0) {
	//cout<<"nope"<<endl;
	isPrime = false;
	cout<<"Found divisor: "<<i<<endl;
	break;
      }
    }
  }

  if(isPrime)
    cout<<"test3: yes ("<<counter<<")"<<endl;
  else
    cout<<"test3: no ("<<counter<<")"<<endl;
 
}

void test2(int z) {
  bool isPrime = true;
  int counter = 0;
  else 
 for (int i = 3; i < z; i += 2) {
    if (z % i == 0) {
      //cout<<"nope"<<endl;
      isPrime = false;
      cout<<"Found divisor: "<<i<<endl;
      break;
    }

  }
  
  if(isPrime)
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;
  //isPrime = true;
  //cout<<"Yes, it is"<<endl;
}

void test1(int z) {
  bool isPrime = true;
  int counter = 0;

  for (int i = 2; i < z; i++) {
    counter++;
    if (z % i == 0) {
      //cout<<"nope"<<endl;
      isPrime = false;
      cout<<"Found divisor: "<<i<<endl;
      break;
    }
  }
  
  if(isPrime)
    cout<<"test1: yes ("<<counter<<")"<<endl;
  else
    cout<<"test1: no ("<<counter<<")"<<endl;
  //isPrime = true;
  //cout<<"Yes, it is"<<endl;
}
