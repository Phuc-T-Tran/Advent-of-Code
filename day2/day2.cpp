#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    // Create keypad and coordinates
    int x = 1, y = 1;
    int keypad[3][3];
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            keypad[c][r] = 1 + c + (r * 3);
        }
    }

    string line;
    ifstream file("C:\\Users\\Phuc Tran\\Desktop\\Advent-of-Code\\day2\\input.txt");
    while (getline(file, line)) {
        for (int i = 0; i < line.length(); i++) {
            switch (line[i]) {
            case 'R': x = min(2, x + 1); break;
            case 'L': x = max(0, x - 1); break;
            case 'D': y = min(2, y + 1); break;
            case 'U': y = max(0, y - 1); break;
            }
        }
        cout << keypad[x][y];
    }
    cout << endl;
}
