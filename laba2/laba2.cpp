#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Coordinates {
    private:
        int x, y;
    public:
        Coordinates() {
            x = 0;
            y = 0;
        }

        void setCoordinates(int newX, int newY) {
            x = newX;
            y = newY;
        }

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }
};

class Object {
    private:
        Coordinates currentCoordinates;
        int totalDistance;
    public:
        Object() {
            totalDistance = 0;
        }

        void move() {
            int z = rand() % 10;
            int m = rand() % 10;
            int newX = currentCoordinates.getX() + z;
            int newY = currentCoordinates.getY() + m;
            currentCoordinates.setCoordinates(newX, newY);
            cout << "Current coordinates: " << newX << "/" << newY << endl;
            calculateDistance();
        }

        void calculateDistance() {
            int x = currentCoordinates.getX();
            int y = currentCoordinates.getY();
            int distance = sqrt(pow(x, 2) + pow(y, 2));
            cout << "Distance to (0,0): " << distance << endl;
            totalDistance += distance;
        }

        void printTotalDistance() {
            cout << "Total distance: " << totalDistance << endl;
        }
};

int main() {
    srand(time(NULL));
    int n;
    cout << "Enter value: " << endl;
    cin >> n;
    Object obj;
    for (int i = 0; i < n; i++) {
        obj.move();
    }
    obj.printTotalDistance();
    return 0;
}