#include <iostream>
#include <iostream>
#include <numeric>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <cmath>
#include <cstring>
#include <string>
#include <bitset>
#include <deque>
#include <list>
#include <iterator>
#include <array>

using namespace std;
typedef signed long long ll;
typedef unsigned long long ull;
#define endl "\n"

const int SIZE = 3;

void display_board(const vector<vector<char> >& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "---------\n";
    }
}
bool check_for_win(const vector<vector<char> >& board, char player) {
    for (int i = 0; i < SIZE; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}
bool check_for_draw(const vector<vector<char> >& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}
void player_input_move(vector<vector<char> >& board, char player) {
    int row, col;
    while (true) {
        cout << "Player " << player << ", enter your move (row and column): ";
        cin >> row >> col;
        if (row >= 1 && row <= SIZE && col >= 1 && col <= SIZE && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = player;
            break;
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     char play_again = 'Y';
    while (play_again == 'Y' || play_again == 'y') {
        vector<vector<char> > board(SIZE, vector<char>(SIZE, ' '));
        char current_player = 'X';
        bool game_won = false, game_draw = false;

        while (true) {
            display_board(board);
            player_input_move(board, current_player);
            game_won = check_for_win(board, current_player);
            if (game_won) {
                display_board(board);
                cout << "Player " << current_player << " wins!" << endl;
                break;
            }
            game_draw = check_for_draw(board);
            if (game_draw) {
                display_board(board);
                cout << "The game is a draw!" << endl;
                break;
            }
            current_player = (current_player == 'X') ? 'O' : 'X';
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> play_again;
    }

    return 0;
}