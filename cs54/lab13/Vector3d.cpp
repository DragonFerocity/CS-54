//Ryan Andrews		Date: 4/22/14
//Class: CS 54		Section: 3A

#include "Vector3d.h"
using namespace std;

Vector3D Vector3D::operator+(Vector3D v1)
{
  Vector3D vNew;
  vNew.m_x = m_x + v1.m_x;
  vNew.m_y = m_y + v1.m_y;
  vNew.m_z = m_z + v1.m_z;
  
  return vNew;
}

Vector3D Vector3D::operator-(Vector3D v1)
{
  Vector3D vNew;
  vNew.m_x = m_x-v1.m_x;
  vNew.m_y = m_y-v1.m_y;
  vNew.m_z = m_z-v1.m_z;
  
  return vNew;
}

float Vector3D::getX() const
{
  return m_x;
}

float Vector3D::getY() const
{
  return m_y;
}

float Vector3D::getZ() const
{
  return m_z;
}

void Vector3D::setX(const float x)
{
  m_x = x;

  return;
}

void Vector3D::setY(const float y)
{
  m_y = y;
  
  return;
}

void Vector3D::setZ(const float z)
{
  m_z = z;
  
  return;
}

ostream& operator<<(ostream& os, const Vector3D v1)
{
  os << "(" << v1.getX() << "," << v1.getY() << "," << v1.getZ() << ")";
  
  return os;
}
    
istream& operator>>(istream& is, Vector3D& v1)
{
  float x,y,z;
  is >> x;
  is >> y;
  is >> z;

  v1.setX(x);
  v1.setY(y);
  v1.setZ(z);
          
  return is;
}
            
