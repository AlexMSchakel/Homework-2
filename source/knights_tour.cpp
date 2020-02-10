#include <iostream>
#include <iomanip>
#include "knights_tour.h"
using namespace std;

KnightsTour::KnightsTour(int board_size) {
  this->board_size = board_size;

  this->board.resize(board_size);
  for (int i = 0; i < board_size; ++i) {
    this->board[i].resize(board_size);
  }
}

void KnightsTour::print() {
  for (int i = 0; i < this->board_size; i++) {
    for (int j = 0; j < this->board_size; j++)
      cout << setw(4) << this->board[i][j] << " ";
    cout << endl;
  }
  cout << endl << endl;
}

// Function: get_moves()
//    Desc: Get the row and column indices of all valid
//          knight moves reachable from position row, col.
//          An invalid move would be one that sends the
//          knight off the edge of the board or
//          to a position that has already been visited.
//          
//    int row         - Current row position of knight.
//    int col         - Current column position of knight.
//    int row_moves[] - Array to store row indices
//                      of all valid new moves reachable from
//                      the current position row, col.
//    int col_moves[] - Array to store column indices
//                      of all valid new moves reachable from
//                      the current position row, col.
//    int num_moves -   Number of valid moves found. Corresponds
//                      to the sizes of row_moves and col_moves.

void KnightsTour::get_moves(int row, int col, int row_moves[], int col_moves[], int& num_moves) {
  int rm2 = row - 2; //Row - 2
  int rm1 = row - 1; //Row - 1
  int rp1 = row + 1; //Row + 1
  int rp2 = row + 2; //Row + 2
  int cm2 = col - 2; //Column - 2
  int cm1 = col - 1; //Column - 1
  int cp1 = col + 1; //Column + 1
  int cp2 = col + 2; //Colimn + 2
  if (rm2 > -1 && cp1 < 6) { //CW #1
     
  } 
  if (rm2 > -1 && cp1 < 6) { //CW #2

  }
  if (rm2 < 6 && cp1 < 6) { //CW #3

  }
  if (rm2 < 6 && cp1 < 6) { //CW #4

  }
  if (rm2 < 6 && cp1 > -1) { //CW #5

  }
  if (rm2 < 6 && cp1 > -1) { //CW #6

  }
  if (rm2 > -1 && cp1 > -1) { //CW #7

  }
  if (rm2 > -1 && cp1 > -1) { //CW #8

  }
}

// Function: move() --> Recursive
//     int row        - Current row position of knight.
//     int col        - Current column position of knight.
//     int& m         - Current move id in tour.
//                      Stored in board at position
//                      row, col.
//     int& num_tours - Total number of tours found.

void KnightsTour::move(int row, int col, int& m, int& num_tours) {
}

int KnightsTour::generate(int row, int col) {
  int m = 0;
  int num_tours = 0;
  move(row, col, m, num_tours);

  return num_tours;
}
