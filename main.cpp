#include <iostream>
#include <cstring>
using namespace std;

struct CarData{
  char reg_no[8];
  char model[30];
  int year;
  float mileage;
};

int main() {
 CarData mine, yours;
 mine.year = 2013;
 strcpy(mine.model, "Land Rover");
 yours =mine;
}