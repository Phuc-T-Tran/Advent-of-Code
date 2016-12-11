#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

enum Direction { N, E, S, W };

void changeDirection(Direction& dir, char turn) {
    if (turn == 'R') {
        switch (dir) {
            case N dir = E; break;
            case E dir = S; break;
            case S dir = W; break;
            case W dir = N; break;
        }
    }
    else {
        switch (dir) {
            case N dir = W; break;
            case E dir = N; break;
            case S dir = E; break;
            case W dir = S; break;
        }
    }
}

void updatePosition(Direction dir, int& x, int& y, int amount) {
    switch (dir) {
        case E x += amount; break;
        case W x -= amount; break;
        case N y += amount; break;
        case S y -= amount; break;
    }
}

int main(int argc, char argv[]) {
    Direction dir = N;
    int x = 0, y = 0;

    ifstream file("input.txt");
    string line;

    while (getline(file, line, ',')) {
        getline(file, string(), ' ');  get rid of space
        changeDirection(dir, line[0]);
        updatePosition(dir, x, y, atoi(line.substr(1, line.length()).c_str()));
    }

    cout << "Shortest Manhattan Distance = " << abs(x) + abs(y) << endl;
}
