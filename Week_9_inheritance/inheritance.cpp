#include <iostream>
#include <string>
using namespace std;
class Shape {
    protected:
    string colour;
    public:
    Shape(string c) {
        colour = c;
        cout << "Shape constructor called." << endl;
    }
    void displayColour() {
        cout << "This shape's colour is: " << colour << endl;
    }
};
class Circle : public Shape {
    private:
    double radius;
    public:
    Circle(string c, double r) : Shape(c) {
        radius = r;
        cout << "Circle constructor called." << endl;
    }
    void displayCircleInfo() {
        cout << "This circle is " << colour << " and has a radius of" << radius << endl;
    }
};
class Rectangle : public Shape {
    private:
    double width, height;
    public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called." << endl;
    }
    void displayRectangleInfo() {
        cout << "This rectangle is " << colour << " and is " << width << "x" << height << endl;
        }
};
int main() {
    cout << "--- Creating a Circle ---" << endl;
    Circle myCircle("Red", 5.0);
    myCircle.displayColour();
    myCircle.displayCircleInfo();
    cout << "\n--- Creating a Rectangle ---" << endl;
    Rectangle myRect("Red", 4.0, 6.0);
    myRect.displayColour();
    myRect.displayRectangleInfo();
    return 0;
}