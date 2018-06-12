#ifndef CLASS_VECTOR
#define CLASS_VECTOR
#include <iostream>

class Vector
{
public:
    Vector (const int size = 100);
   ~Vector ();
    Vector (const Vector & src);
    Vector & operator= (const Vector & rhs);
  void push_back (int element);
  void insert_at (int pos, int element);
  int get_at (int pos);
  int get_size ();
  void showVector () const;
private:
  int *m_arr;
  int m_size;
  int m_index;
};
#endif
