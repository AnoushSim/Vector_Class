#include <iostream>
#include <Vector_Class.h>
#include <Vector_Class.cpp>
int main()
{
  Vector* p = new Vector;
  p->push_back(21);
  p->push_back(8);
  p->push_back(45);
  p->insert_at(2,15);
  p->insert_at(3,27);
  int tmp = p->get_at(4);
  std::cout << "The 4th element of vector is: ";
  std::cout << tmp<< std::endl;
  int tmp1 = p->get_size();
  std::cout << "The size of vector is: ";
  std::cout << tmp1 << std::endl;
  Vector* p1;
  p1 = p;
  p1->showVector();
  p->showVector();
  return 0;
}
