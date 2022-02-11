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

void DisplayBoard(Board Table) {

  char plays[9];

  int count = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      if (Table.ray[i][j] == 0) {

        plays[count] = ' ';

      }
      if (Table.ray[i][j] == 1) {

        plays[count] = 'X';

      }
      if (Table.ray[i][j] == 2) {

        plays[count] = 'O';

      }

      count++;

    }

  }

  cout << " "<< plays[0] << "|" << plays[1] << "|" << plays[2] << " " << endl;
  cout << "--|-|-- " << endl;
  cout << " "<< plays[3] << "|" << plays[4] << "|" << plays[5] << " " << endl;
  cout << "--|-|-- " << endl;
  cout << " "<< plays[6] << "|" << plays[7] << "|" << plays[8] << " " << endl;
  cout << endl;

}


int main() {

  CreateBoard();

}
