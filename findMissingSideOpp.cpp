
#include <iostream>
#include <math.h>
using namespace std;

// Code for finding the missing side of a triangle.
void findMissingSide(double a ,double b) {
    double answer;
    double degree = b * (3.14159265 / 180);
    answer = a / tan(degree);
    cout << "The missing side length of a triangle is approximately " << answer << endl;
}


int main(){
    double opp, angle;
    cout << "Enter the opposite side of the triangle: ";
    cin>>opp;
    cout << "Enter the given angle of the triangle: ";
    cin>>angle;
    cout << endl;
    findMissingSide(opp, angle);
    return 0;
}

