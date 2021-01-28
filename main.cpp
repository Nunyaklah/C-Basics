#include <iostream>
using namespace std;


int main() {
  int total;
  cout<< "enter total: ";
  cin>>total;

  int *t_ptr = &total;
  cout<<total<< "\n"<< *t_ptr<<endl;

  ++*t_ptr;
  cout<< total <<"\n"<<*t_ptr;

  //try
}