#include <iostream>
using namespace std;


int main() {
 int i = 5;
 int &ir = i;
 cout << i << ir <<endl;
 ++i;
 cout << i << ir <<endl;
 ++ir;
 cout << i <<ir << endl;
}