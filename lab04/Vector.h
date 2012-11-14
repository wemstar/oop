#ifndef _ARRAY_H_
#define _ARRAY_H_
class Vector 
{
public:
  Vector()
    {
      _capacity = 10;
      _size = 1;
      _tab = new int[_capacity];
    }
  ~Vector()
    { 
    }
    
  int capacity(); 
  int size();
  void read_from_cin();
  void print_to_cout();
  void push_front(int element);
  void push_back(int element);
  int head();
  int tail();
  void resize(int new_size);
  void reserve(int new_size);
  void reverse();
  void sort();
  int * get_head_ptr();
  int * get_tail_ptr();

private:
  int _capacity;
  int _size;

  int *_tab;

  void copy_tab(int *tab_1, int *tab_2);
};

      #endif
