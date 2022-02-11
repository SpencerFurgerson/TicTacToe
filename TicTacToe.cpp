#include <iostream>
#include <math.h>
using namespace std;

// Board struct that defines a 3x3 empty array

struct Board {
  int ray[3][3] =
  {
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };
};

// This function creates a Board struct and passes it to main

Board *CreateBoard() {

  Board *Table = new Board();
  return Table;

}

//Display the board based on if a space has been played or is still empty

void DisplayBoard(Board *Table) {
  char move[9];
  int index = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (Table->ray[i][j] == 1) {
        move[index] = 'X';
      }
      else if (Table->ray[i][j] == 2) {
        move[index] = 'O';
      }
      else {
        move[index] = ' ';
      }
      index++;
    }
  }
  cout << move[0] << " |" << move[1] << "|" << move[2] << endl;
  cout << "--|-|--" << endl;
  cout << move[3] << " |" << move[4] << "|" << move[5] << endl;
  cout << "--|-|--" << endl;
  cout << move[6] << " |" << move[7] << "|" << move[8] << endl;
  cout << endl;
}

//Place the Player's respective marker on the space which they select

void PlaceMarker(Board *Table, int board_value, int row, int col) {

  Table->ray[row][col] = board_value;

}

// Ask the player which space like would like to cover and pass it to PlaceMarker

void GetPlayerChoice(int Player, Board *Table) {

  cout << "Where will you move?" << endl;

  cout << " 1|2|3 " << endl;
  cout << "--|-|-- " << endl;
  cout << " 4|5|6 " << endl;
  cout << "--|-|-- " << endl;
  cout << " 7|8|9 " << endl;
  cout << endl;

  bool moved = false;

  while (moved == false) {

    int move;
    cin >> move;

    switch (move) {

      case 1:
        if (Table->ray[0][0] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,0,0);
        return;
        break;

      case 2:
        if (Table->ray[0][1] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,0,1);
        return;
        break;

      case 3:
        if (Table->ray[0][2] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,0,2);
        return;
        break;

      case 4:
        if (Table->ray[1][0] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,1,0);
        return;
        break;

      case 5:
        if (Table->ray[1][1] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,1,1);
        return;
        break;

      case 6:
        if (Table->ray[1][2] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,1,2);
        return;
        break;

      case 7:
        if (Table->ray[2][0] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,2,0);
        return;
        break;

      case 8:
        if (Table->ray[2][1] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,2,1);
        return;
        break;

      case 9:
        if (Table->ray[2][2] != 0) {

          cout << "That spot is taken!" << endl;
          cout << endl;
          continue;

        }
        PlaceMarker(Table,Player,2,2);
        return;
        break;
    }

    cout << "Invalid, try again!" << endl;
    cout << endl;

  }

}



int main() {

  CreateBoard();
  Board Table;

  int Player = 1;
  int turns = 0;

  //while loop for the game

  while (turns < 9) {
    cout << endl;

    cout << "Player " << Player << "'s turn!" << endl;

    DisplayBoard(&Table);

    GetPlayerChoice(Player,&Table);


    if (Player == 1) {
      Player = 2;
    }

    else {
      Player = 1;
    }

    turns++;

  }

  DisplayBoard(&Table);


  return 0;


}
