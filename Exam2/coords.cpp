#include<iostream>
#include "coords.h"
#include<string>
#include<cmath>
#include<ostream>

using namespace std;

namespace coords {
  rect_coords::rect_coords(){
    x=0;
    y=0;
  }

  rect_coords::rect_coords(double a, double b){
    if((a >= 0)&&(b >= 0)){
    x= a;
    y= b;
      }
      else{
	cout<<"rect_coords: need xco >=0 and yco >=0 [will use Cartesian origin]."<<endl;
	x=0;
	y=0;
      }
  }

  polar_coords rect_coords::toPolar(){
    polar_coords temp;
    temp.r= sqrt(pow(x,2) + pow(y,2));
    if(y == 0){
      temp.t= 0.523599;
    }
    else{
      temp.t=  atan(y/x);
    }
    return temp;
  }

  rect_coords polar_coords::toRectangular(){
    rect_coords temp;
    temp.x= r*cos(t);
    temp.y= r*sin(t);
    return temp;
  }  
  void rect_coords::print(string rname){
    cout<<"Rectangluar coordinates of "<<rname<<": ("<<x<<", "<<y<<")"<<endl;

  }

  polar_coords::polar_coords(){
    r=0;
    t=0.523599;
  }

  polar_coords::polar_coords(bool o , double a, double b){
    if(o==true){
      r=0;
      t=0.523599;
    }
    else if((a<0)||(b<0)||(b>(M_PI/2))){
      cout<<"polar_coords(): need r>=0 and 0<=theta<=PI/2 [will use polar origin]."<<endl;
      r=0;
      t=0.523599;
    }
    else{
      r=a;
      t=b;
    }
  }

  polar_coords::polar_coords(const polar_coords& first){
    r=first.r;
    t=first.t;

  }

  void polar_coords::print(string pname){
    cout<<"Polar coordinates of "<<pname<<": ("<<r<<", "<<t<<" rads)"<<endl;
  }

   polar_coords& polar_coords::operator=(const polar_coords& RTP){
    r= RTP.r;
    t= RTP.t;
    return *this;
  }


}
