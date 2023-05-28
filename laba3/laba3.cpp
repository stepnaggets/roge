#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <stdlib.h>

class Coordinates {
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

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }
};

class Object {
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
            std::cout << "Current coordinates: " << newX << "/" << newY << std::endl;
            calculateDistance();
        }

        void calculateDistance() {
            int x = currentCoordinates.getX();
            int y = currentCoordinates.getY();
            int distance = sqrt(pow(x, 2) + pow(y, 2));
            std::cout << "Distance to (0,0): " << distance << std::endl;
            totalDistance += distance;
        }

        void printTotalDistance() const {
            std::cout << "Total distance: " << totalDistance << std::endl;
        }
};

int main() {
    srand(time(NULL));
    int n;
    std::cout << "Enter value: " << std::endl;
    std::cin >> n;
    Object obj;
    for (int i = 0; i < n; i++) {
        obj.move();
    }
    obj.printTotalDistance();
    return 0;
}