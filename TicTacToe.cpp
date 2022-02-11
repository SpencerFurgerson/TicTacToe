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

void DisplayBoard(Board *Table) {
  char move[9];
  int index = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (Table.ray[i][j] == 1) {
        move[index] = 'X';
      }
      else if (Table.ray[i][j] == 2) {
        move[index] = 'O';
      }
      else {
        move[index] = ' ';
      }
      index++;
    }
  }
  cout << moves[0] << "|" << moves[1] << "|" << moves[2] << "|" << endl;
  cout << "--|--|--" << endl;
  cout << moves[3] << "|" << moves[4] << "|" << moves[5] << "|" << endl;
  cout << "--|--|--" << endl;
  cout << moves[6] << "|" << moves[7] << "|" << moves[8] << "|" << endl;
  cout << endl;
}

int main() {

  CreateBoard();

}
