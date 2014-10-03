#include<iostream>
using namespace std;

class Person
{
  public:
    Person(int id, char *name)
    {
      _id = id;
      strcpy(_name, name);
    }
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
