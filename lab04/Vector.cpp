#include <iostream>
#include "Vector.h"

int Vector::capacity()
{
  return(_capacity);
}

int Vector::size()
{
  return(_size);
}

void Vector::read_from_cin()
{
  int element; // wczytywany element
  int i = 0;

  do
  {
    std::cin >> element;
    
    _tab[i] = element;
    
    ++i;
    ++_size;
    
    if(_size >= _capacity)
      {
	reserve(_capacity * 2);
      }
  }
  while(!std::cin.eof());

}

void Vector::print_to_cout()
{
  int i;

  for(i = 0; i < _size; ++i)
    std::cout << _tab[i] << "\n";
}

void Vector::push_front(int element)
{
  int * tmp;

  tmp = new int[_capacity];
  
  copy_tab(tmp,_tab);

  if (_size == _capacity)
    reserve(_capacity * 2);

  _tab[0] = element;

  copy_tab((&_tab[1]),tmp);
  
  delete[] tmp;
}

void Vector::push_back(int element)
{
  int *tmp;

  if(_size == _capacity)
    reserve(_capacity * 2);

  _tab[_size] = element; 

  ++_size;
}

int Vector::head()
{
  return(_tab[0]);
}

int Vector::tail()
{
  return(_tab[_size - 1]);
}

void Vector::resize(int new_size)
{
  while(new_size > _capacity)
    reserve(_capacity * 2);
}

void Vector::reserve(int new_size)
{
  int *tmp; // kopia tablicy
  
  tmp = new int[_capacity];

  copy_tab(tmp,_tab);

  delete[] _tab;

  _tab = new int[new_size];
  _capacity = _capacity * 2;

  copy_tab(_tab,tmp);

  delete[] tmp;
  
}

void Vector::reverse()
{
  
  int *tmp;
  int i;
  int n = _size - 1;

  tmp = new int[_size];
  copy_tab(tmp,_tab);

  for (i = 0; i < _size; ++i, --n)
    _tab[i] = tmp[n];
  
  delete[] tmp;
  
}

void Vector::sort()
{
  int i,j; // liczniki petli
  int tmp;

  for(i = 0; i < _size; ++i)
    for(j = 0; j < _size; ++j)
      if(_tab[i] < _tab[j])
	{
	  tmp = _tab[i];
	  _tab[i] = _tab[j];
	  _tab[j] = tmp;
	}
}

int * Vector::get_head_ptr()
{
  return(_tab);
}

int * Vector::get_tail_ptr()
{
  return(&(_tab[_size]));
}

void Vector::copy_tab(int *tab_1, int *tab_2)
{
  int i;

  for(i = 0; i < _size; ++i)
    tab_1[i] = tab_2[i];
}
