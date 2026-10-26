#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> board;
bool isSafe(int row, int col) {
for (int i = 0; i < row; i++) {
if (board[i] == col ||
abs(board[i] - col) == abs(i - row))
return false;
}
return true;
}
bool solve(int row) {
if (row == n) return true;
for (int col = 0; col < n; col++) {
if (isSafe(row, col)) {
board[row] = col;
if (solve(row + 1))
return true;
}
}
return false;
}
void printBoard() {
cout << "\nSolution:\n";
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (board[i] == j) cout << "Q ";
else cout << ". ";
}
cout << endl;
}
}
int main() {
cout << "Enter the value of N: ";
cin >> n;
board.resize(n);
if (solve(0))
printBoard();
else
cout << "No solution exists for " << n << " queens." << endl;
return 0;
}