#include <iostream>
#include <cmath>
int main()
{
 double a, b, c, d, x1, x2;
 std::cout << "Input values for a, b and c in the quadratic equation\nax^2 + bx + c :\na: ";
 std::cin >> a;
 std::cout << "b: ";
 std::cin >> b;
 std::cout << "c: ";
 std::cin >> c;
 d = (b*b)-(4*a*c);
 if (d>0) {
    x1 = ((-b) + (sqrt(d)))/(2*a);
    x2 = ((-b) - (sqrt(d)))/(2*a);
    std::cout << "The two roots of the equation are x = " << x1 << " and x = " << x2;
 }if (d == 0) {
    x1 = x2 = (-b)/(2*a);
    std::cout << "The root of this equation is x = " << x1;
 }if (d < 0){
     d *= -1;
     b *= -1;
     std::cout << "The complex roots of this equation are \nx = (" << b << " + " << d << " i) / ( "<< 2*a << " ) and \nx = (" << b << " - " << d << " i) / ( "<< 2*a << " )";
 }
}
