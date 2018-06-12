#include <iostream>
#include <Vector_Class.h>
Vector::Vector (const int size)
{
  m_size = size;
  if (size < 1)
    {
      std::cout << "Vector must contain some elements!";
      return;
    }
  m_arr = new int[size];
  m_index = -1;
}

Vector::~Vector ()
{
  delete[]m_arr;
  m_arr = nullptr;
}

Vector::Vector (const Vector & src)
{
  m_arr = src.m_arr;
  m_size = src.m_size;
  m_index = src.m_index;
}

Vector & Vector::operator= (const Vector & rhs)
{
  if (this == &rhs)
    return *this;
  m_arr = rhs.m_arr;
  m_size = rhs.m_size;
  m_index = rhs.m_index;
  return *this;
}

void Vector::push_back (int element)
{
  if (m_index == m_size - 1)
    {
      int *tmp = new int[2 * m_size];
      for (int ix = 0; ix < m_index; ++ix)
	tmp[ix] = m_arr[ix];
      delete[]m_arr;
      m_arr = tmp;
      m_size *= 2;
    }
  m_arr[++m_index] = element;
}


void Vector::insert_at(int pos, int element) {
	int * insert = new int[this->m_size];
	int j = 0;
	for (int i = 0; i <= this->m_size; ++i) {
		if (i == pos) {
			insert[pos] = element;
			++m_index;
		}
		else{
		insert[i] = this->m_arr[j];
		j++;
		}
	}
	for (int i = 0; i < this->m_size; ++i) {
		this->m_arr[i] = insert[i];
	}
	
}

int Vector::get_at (int pos)
{
  if (m_index < 0)
    {
      std::cout << "Vector is empty!";
      return -1;
    }
  if (m_index < pos)
    {
      std::cout << "Position index is greater than Vector size!";
      return -1;
    }
  return m_arr[pos];
}

int Vector::get_size() { return m_index; }

void Vector::showVector() const
{
  std::cout << "Your Vector content is: " << std::endl;
  for (int ix = 0; ix < m_index; ++ix)
      std::cout << m_arr[ix] << std::endl;
}
