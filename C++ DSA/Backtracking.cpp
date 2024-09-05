#include <iostream>
#include <vector>
using namespace std;

bool solveMaze(vector<vector<int>>& maze, int x, int y, vector<vector<int>>& solution) {
    int n = maze.size();
    if (x == n - 1 && y == n - 1 && maze[x][y] == 1) {
        solution[x][y] = 1;
        return true;
    }
    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1) {
        if (solution[x][y] == 1)
            return false;
        solution[x][y] = 1;
        if (solveMaze(maze, x + 1, y, solution)) return true;
        if (solveMaze(maze, x, y + 1, solution)) return true;
        solution[x][y] = 0;
        return false;
    }
    return false;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    vector<vector<int>> solution(4, vector<int>(4, 0));

    if (solveMaze(maze, 0, 0, solution)) {
        for (auto row : solution) {
            for (auto col : row) {
                cout << col << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists" << endl;
    }
    return 0;
}
