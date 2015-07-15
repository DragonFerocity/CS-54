//Ryan Andrews		Date: 4/22/14
//Class: CS 54		Section: 3A

#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
using namespace std;

//Sets the default values for a 3D Vector
//
//
//Defines how to add two vectors
//
//
//Defines how to subtract two vectors
//
//
//Defines how to output a vector to the screen
//
//
//Returns the x-value
//
//
//Returns the y-value
//
//
//Returns the z-value
//
//
//Asks the user for an x-value
//
//
//Asks the user for a y-value
//
//
//Asks the user for a z-value
//
//

class Vector3D
{
  public:
    Vector3D():m_x(0), m_y(0), m_z(0){};
    Vector3D(const float x, const float y, const float z):
          m_x(x), m_y(y), m_z(z){};
    Vector3D operator+(Vector3D v1);
    Vector3D operator-(Vector3D v1);
    friend ostream& operator<<(ostream& os, const Vector3D v1);
    friend istream& operator>>(istream& is, Vector3D& v1);
    float getX() const;
    float getY() const;
    float getZ() const;
    void setX(const float x);
    void setY(const float y);
    void setZ(const float z);
  
  private:
    float m_x;
    float m_y;
    float m_z;
};

#endif
