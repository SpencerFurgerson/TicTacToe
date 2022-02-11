#include <iostream>
#include <math.h>
using namespace std;

struct Board {
  int ray[3][3] =
  {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };
};

Board *CreateBoard() {

  Board *Table = new Board();
  return Table;

}


int main() {

  CreateBoard();

}
