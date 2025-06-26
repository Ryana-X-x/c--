#include <iostream>

using namespace std ;

// class Point{
// private: 
//     int x, y ;

// public: 
//     Point(): x(0), y(0) {}

//     Point(int x1, int y1): x(x1), y(y1) {}

//     void print() {
//         cout << x << " " << y << endl ;
//     }
// } ;

// int main() {
//     Point p1, p2(10, 25) ;
//     p1.print() ;
//     p2.print() ;
//     Point *ptr = new Point(30, 40) ;
//     ptr->print() ;
//     return 0 ;
// }

// *************************
// constructor without initialzer list and with initializer list
class Test{
public: 
    Test() { cout << "Default" << endl ;}
    Test(int x) { cout << "Parameterized" << endl ;}
};

class Main{
    Test t ;
public: 
    // Main() {
    //     t = Test(10) ;   // will print both Default and Parameterized, results to bad performance
    // }

    Main(): t(10) {}    // will only print Parameterized
};

int main() {
    Main m ;
    return 0 ;
}