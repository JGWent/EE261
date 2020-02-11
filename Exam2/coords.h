#ifndef COORD_H
#define COORD_H

#include<iostream>
#include<cstdlib> 
#include<string>
#include<vector>
#include<ostream>
using namespace std;

//class rect_coords;
//class polar_coords;

namespace coords {
  class rect_coords;
  class polar_coords;

  class rect_coords {
    friend class polar_coords;
  private:
    double x, y;

  public:
    double r,t;
    rect_coords();

    rect_coords(double a, double b);

    polar_coords toPolar();

    void print(string rname);
  };
  class polar_coords {
    friend class rect_coords;
  private:
    double r, t;
  public:
    polar_coords();
    
    polar_coords(bool o , double a, double b);
    
    polar_coords(const polar_coords& first);

    void print(string pname);

    rect_coords toRectangular();
    
    polar_coords& operator=(const polar_coords& RTP);

  };
}

#endif
