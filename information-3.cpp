#include <iostream>

using namespace std;

class Square {
private:
    double width;
    double height;

public:
    Square(double _width = 1.0, double _height = 1.0) {
        this->width = _width;
        this->height = _height;
    }

    double* GetWidth() {
        return &width;
    }

    double* GetHeight() {
        return &height;
    }

    void SetWidth(double _width) {
        this->width = _width;
    }

    void SetHeight(double _height) {
        this->height = _height;
    }

    double Area() {
        return this->width * this->height;
    }
};

int main(void) {
    Square obj(2.5);
    double* _height = obj.GetHeight();
    double* _width = obj.GetWidth();

    *_height = 20.5;
    *_width = 34.1;

    cout<<obj.Area();

    return 0;
}