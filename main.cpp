#include <iostream>
using namespace std;


int main() {
 int arr[10]; //an array containing ten elements int

 char rev[] = "reverse";
 int i =0 ;
 while (rev[i] != '\0')
 i++;
 cout<<"No of chars: " <<i;
 while (i > 0)
 {
   --i;
   cout << rev[i];
 }
}