#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
Complex(double r = 0, double i = 0) : real(r), imag(i) {}
Complex operator+(const Complex& other) const {
return Complex(real + other.real, imag + other.imag);
}
bool operator==(const Complex& other) const {
return real == other.real && imag == other.imag;
}
bool operator<(const Complex& other) const {
double mag1 = real * real + imag * imag;
double mag2 = other.real * other.real + other.imag * other.imag;
return mag1 < mag2;
}
bool operator>(const Complex& other) const {
double mag1 = real * real + imag * imag;
double mag2 = other.real * other.real + other.imag * other.imag;
return mag1 > mag2;
}
Complex& operator=(const Complex& other) {
if (this != &other) {
real = other.real;
imag = other.imag;
}
return *this;
}
void print() const {
if (imag >= 0) {
cout << real << " + " << imag << "i" << endl;
}
else {
cout << real << " - " << -imag << "i" << endl;
}
}
};

int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
Complex c1(3, 4);
Complex c2(1, 2);
Complex c3 = c1 + c2;
cout << "сума: ";
c3.print();
cout << "c1 == c2: " << (c1 == c2 ? "true" : "false") << endl;
cout << "c1 < c2: " << (c1 < c2 ? "true" : "false") << endl;
cout << "c1 > c2: " << (c1 > c2 ? "true" : "false") << endl;
Complex c4;
c4 = c1;
cout << "присвоєння c1 до c4: ";
c4.print();
 return 0;
}
