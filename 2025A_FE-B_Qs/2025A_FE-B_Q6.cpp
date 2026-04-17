#include<iostream>
using namespace std;

class Cuboid; // forward declaration

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void enlarge(Cuboid c); // function declaration

    void output() {
        cout << "(" << length << ", " << width << ")";
    }
};

class Cuboid {
public:
    int length, width, height;

    Cuboid(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }
};

// define enlarge after Cuboid is defined
void Rectangle::enlarge(Cuboid c) {
    length = length + c.length;
    width = width + c.width;
}

int main() {
    Rectangle f1(5, 2);
    Cuboid f2(9, 4, 7);

    f1.enlarge(f2);
    f1.output();

    return 0;
}
