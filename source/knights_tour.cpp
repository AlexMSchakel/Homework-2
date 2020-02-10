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

bool KnightsTour::valid(int r, int c) {
    if ((r > -1 && r < 6) && (c > -1 && c < 6))
      if (board[r][c] == 0)  //If space is unoccupied
        return(true);
    return(false);
}

void KnightsTour::get_move_helper(int row, int col, int& row_moves[], int& col_moves[], int& num_moves) {
  row_moves[num_moves] = row;
  row_moves[num_moves] = col;
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
  num_moves = 0;      //Set number of moves to zero
  
  if (valid(row - 2, col + 1)) //CW #1
    get_move_helper(row - 2, col + 1, row_moves[], col_moves[], num_moves++);
  if (valid(row - 1, col + 2)) //CW #2
    get_move_helper(row - 1, col + 2, row_moves[], col_moves[], num_moves++);
  if (valid(row + 1, col + 2)) //CW #3
    get_move_helper(row + 1, col + 2, row_moves[], col_moves[], num_moves++);
  if (valid(row + 2, col + 1)) //CW #4
    get_move_helper(row + 2, col + 1, row_moves[], col_moves[], num_moves++);
  if (valid(row + 2, col - 1)) //CW #5
    get_move_helper(row + 2, col - 1, row_moves[], col_moves[], num_moves++);
  if (valid(row + 1, col - 2)) //CW #6
    get_move_helper(row + 1, col - 2, row_moves[], col_moves[], num_moves++);
  if (valid(row - 1, col - 2)) //CW #7
    get_move_helper(row - 1, col - 2, row_moves[], col_moves[], num_moves++);
  if (valid(row - 2, col - 1)) //CW #8
    get_move_helper(row - 2, col - 1, row_moves[], col_moves[], num_moves++);
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
