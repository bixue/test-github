#include<iostream>
using namespace std;

class Person
{
  public:
    Person(){};
    void setInfo(int id, char *name)
    {
      _id = id;
      strcpy(_name, name);
    }
    void print()
    {
      cout<<id<<" "<<name<<endl;
    }
  private:
    int _id;
    char _name[20];

};
