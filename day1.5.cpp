#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <utility>
using namespace std;

enum Direction { N, E, S, W };

void changeDirection(Direction& dir, char turn) {
    if (turn == 'R') {
        switch (dir) {
        case N: dir = E; break;
        case E: dir = S; break;
        case S: dir = W; break;
        case W: dir = N; break;
        }
    }
    else {
        switch (dir) {
        case N: dir = W; break;
        case E: dir = N; break;
        case S: dir = E; break;
        case W: dir = S; break;
        }
    }
}

int main(int argc, char* argv[]) {
    Direction dir = N;
    int x = 0, y = 0;
    map< pair<int, int>, bool > visited;
    bool locationFound = false;

    ifstream file("input.txt");
    string line;

    while (getline(file, line, ',')) {
        getline(file, string(), ' '); // Get rid of the space
        changeDirection(dir, line[0]);
        
        int amount = atoi(line.substr(1, line.length()).c_str());
        for (int i = 0; i < amount; i++) {
            switch (dir) { // Perform a single step
                case E: x++; break;
                case W: x--; break;
                case N: y++; break;
                case S: y--; break;
            }

            if (!locationFound) {
                pair<int, int> location = make_pair(x, y);

                // Check if we visited a location twice
                if (!visited[location])
                    visited[location] = true;
                else {
                    cout << "Manhattan Distance of the first location visited twice = " << abs(x) + abs(y) << endl;
                    locationFound = true;
                    break;
                }
            }
        }
    }
}
