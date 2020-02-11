#include<iostream>
#include<vector>
using namespace std;

void getpoly(vector<int>&, int&, vector<int>&, int&);

vector<int> up_multiply(vector<int>&, int, vector<int>&, int);

void print(vector<int>);

int main()
{
  vector<int> con1;
  vector<int> con2;
  vector<int> prod;
  int deg1, deg2;

  getpoly(con1, deg1, con2, deg2);
  cout << "Poly 1: (";
  for (int i = 0; i <= deg1; i++) {
    cout << con1[i];
    if (i <= deg1 - 1)
      cout << ",";
    else
      cout << ")";
  }
  cout << endl;
  cout << "Poly 2: (";
  for (int i = 0; i <= deg2; i++) {
    cout << con2[i];
    if (i <= deg2 - 1)
      cout << ",";
    else
      cout << ")";
  }
  cout << endl;
  
  prod = up_multiply(con1, deg1, con2, deg2);

  print(prod);
  return 0;
}


void getpoly(vector<int>& C1, int& D1, vector<int>& C2, int& D2) {
  int a;
  cout << "Enter the degree of each of the two polynomials:" << endl;
  cout << "Degree 1: ";
  cin >> D1;
  cout << "Degree 2: ";
  cin >> D2;
  cout << "Enter the constants of each polynomial in the form of (a_0, a_1,....):" << endl;
  cout << "Poly 1:" << endl;
  for (int i = 0; i <= D1; i++) {
    cin >> a;
    C1.push_back(a);
  }
  cout << "Poly 2:" << endl;
  for (int i = 0; i <= D2; i++) {
    cin >> a;
    C2.push_back(a);
  }
}

vector<int> up_multiply(vector<int>& C1, int a, vector<int>& C2, int b)
{

  vector<int> prod(a+b+1);
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      if (prod[i + j] == 0) {
	prod[i + j] = C1[i] * C2[j];
      }
      else {
	prod[i + j] = prod[i + j] + (C1[i] * C2[j]);
      }
    }
  }
  cout << "Prod: (";
  for (int i = 0; i <= a+b; i++) {
    cout << prod[i];
    if (i <= (a+b) - 1)
      cout << ",";
    else
      cout << ")";
  }
  cout << endl;


  return prod;
}

void print(vector<int> prod)
{
  cout << endl;
  int L = prod.size();
  for (int k = 1; k <= L; k++) {
    if ((L - k) != 0)
      {
	if (prod[L - k] != 0) {
	  cout << prod[L - k] << "x^" << L - k <<"+";
	}
	
      }
    else
      cout << prod[L - k] << endl;

  }

}

