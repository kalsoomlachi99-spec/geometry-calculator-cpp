#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

constexpr double PI = 3.14159265359;

double calculateTriangleArea(double breadth, double height){  // area of triangle    

    return (1.0/2)*(breadth*height);
}

double calculateRectangleArea(double breadth , double height){  // area of rectangle

    return (breadth*height);
}

double calculateCircleArea(double radius){  // area of circle

    return PI*radius*radius;
}

double calculateSquareArea(double side){  // area of square

    return side*side;
}

double calculateCylinderVolume(double radius, double height){  // volume of cylinder

    return PI*radius*radius*height;
}

double calculateCuboidVolume(double breadth, double length, double height){  //volume of cuboid(rectangular box)

    return (breadth*height*length);
}

double calculateSphereVolume(double radius){  // volume of sphere

    return (4.0/3)*PI*radius*radius*radius;
}

double getPositiveNumber(const string& prompt){  // get a positive number from input

    double value;

    while (true) {
        cout << prompt;

        if (!(cin >> value)) {
            cout << "Invalid input. Please enter a number.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (value <= 0) {
            cout << "Please enter a positive value.\n";
            continue;
        }

        return value;
    }
}

int main() {

    double breadth , height , length , radius , side;
    cout << fixed << setprecision(2);

    // area of triangle
    
    cout << "For area of triangle enter breadth and height.\n";

    breadth = getPositiveNumber("breadth: ");
    height = getPositiveNumber("height: ");

   double triangleArea = calculateTriangleArea(breadth, height);

   // area of rectangle

    cout << "\nFor area of rectangle enter breadth and height.\n";

    breadth = getPositiveNumber("breadth: ");
    height = getPositiveNumber("height: ");

   double rectangleArea = calculateRectangleArea(breadth, height);

   // area of circle

    cout << "\nFor area of circle enter radius.\n";
    
    radius = getPositiveNumber("radius: ");

    double circleArea = calculateCircleArea(radius);

    // area of square

    cout << "\nFor area of square enter side.\n";

    side = getPositiveNumber("side: ");

    double squareArea = calculateSquareArea(side);

    
   // volume of cuboid
   
    cout << "\nFor volume of cuboid enter breadth , length and height.\n";

    
    breadth = getPositiveNumber("breadth: ");
    length = getPositiveNumber("length: ");
    height = getPositiveNumber("height: ");

   double cuboidVolume = calculateCuboidVolume(breadth, length, height);

    // volume of cylinder

    cout << "\nFor volume cylinder enter radius and height.\n";

    radius = getPositiveNumber("radius: ");
    height = getPositiveNumber("height: ");
   
    double cylinderVolume = calculateCylinderVolume(radius , height);

    // volume of sphere

    cout << "\nFor volume of sphere enter radius.\n";
    
    radius = getPositiveNumber("radius: ");

    double sphereVolume = calculateSphereVolume(radius);

    cout << "\n========================\n";
    cout << "        RESULTS\n";
    cout << "========================\n";
    cout << "\n----- AREAS -----\n";

    cout << "\narea of triangle = " << triangleArea << " square units \n";
   cout << "\narea of rectangle = " << rectangleArea << " square units \n";   
   cout << "\narea of circle = " << circleArea << " square units \n"; 
   cout << "\narea of square = " << squareArea << " square units \n"; 

   cout << "\n----- VOLUMES -----\n";   

   cout << "\nvolume of cuboid = " << cuboidVolume << " cubic units \n";
   cout << "\nvolume of cylinder = " << cylinderVolume << " cubic units \n";
   cout << "\nvolume of sphere = " << sphereVolume << " cubic units \n";

    return 0;
}