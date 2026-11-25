#include <iostream>
#include <iomanip> // for setprecision
#include <cmath> // for pow()
using namespace std;
const double PI = 3.14159;
//FUNCTION : areaOFCircle
//PURPOSE : radius (double)
//Formula: A = PI * pow(radius, 2)
double areaOFCircle(double radius) {
    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
        return 0.0;
    }
    return PI * radius * radius;
}
//FUNCTION : areaOFRectangle
//Formula: A = length * width
double areaOFRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: length and width cannot be negative." << endl;
        return 0.0;
    }
    return length * width;
}
//FUNCTION : areaOFTriangle
//Formula: A = 1/2 * base * height
double areaOFTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        cout << "Error: base and height cannot be negative." << endl;
        return 0.0;
    }
    return 0.5 * base * height;
}
void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}
int main() {
    int choice;
    double radius, length, width, base, height, area;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                area = areaOFCircle(radius);
                if (area > 0) {
                    cout << fixed << setprecision(2);
                    cout << "Area of Circle: " << area << endl;
                }
                break;
            case 2:
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                area = areaOFRectangle(length, width);
                if (area > 0) {
                    cout << fixed << setprecision(2);
                    cout << "Area of Rectangle: " << area << endl;
                }
                break;
            case 3:
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                area = areaOFTriangle(base, height);
                if (area > 0) {
                    cout << fixed << setprecision(2);
                    cout << "Area of Triangle: " << area << endl;
                }
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}