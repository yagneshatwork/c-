#include <iostream>
using namespace std;

class RainfallData {
private:
    int rainfall[3][3];

public:
    // Input data
    void input() {
        cout << "--- Input the rainfall in the cities ---\n\n";
        for(int i=0; i<3; i++) {
            cout << "city" << i+1 << ":";
            for(int j=0; j<3; j++) {
                cout << "day" << j+1 << ":";
                cin >> rainfall[i][j];
            }
            cout << "\n";
        }
    }

    // Display data with averages
    void display() {
        cout << "      ";  //top row
        for(int i=0; i<3; i++) {
            cout << "|" << "day" << i+1 << "\t|";
        }
        cout << "|average|\n";

        for(int i=0; i<3; i++) {
            int sum = 0;
            cout << "city" << i+1 << ":";
            for(int j=0; j<3; j++) {
                cout << "|" << rainfall[i][j] << "\t|";
                sum += rainfall[i][j];
            }
            float avg = (float)sum/3;
            cout << "|" << avg << "\t|\n";
        }
    }
};

int main() {
    RainfallData data;
    data.input();
    data.display();
    return 0;
}
