#include <iostream>

using namespace std ;

class Shalow_Copy {
    int *ptr ;

public:    
    Shalow_Copy(int x) {
        ptr = new int(x) ;
    }
    void set(int x) {
        *ptr = x ;
    }
    void print() {
        cout << *ptr << " " ;
    }

} ;

class Deep_Copy {
    int *ptr ;

public: 
    Deep_Copy(int x) {
        ptr = new int(x) ;  // ptr = memory address of x
    }

    Deep_Copy(const Deep_Copy &d) {
        int val = *(d.ptr) ;    // val = 10
        ptr = new int(val) ;    // ptr = memory location of val
    }
    
    void set(int x) {
        *ptr = x ;  // *ptr = 20
    }
    void print() {
        cout << *ptr << " " ;
    }
} ;

int main() {
    Shalow_Copy s1(10) ;
    Shalow_Copy s2(s1) ;
    s2.set(20) ;
    s1.print() ;    // 20
    s2.print() ;    // 20

    cout << endl ;

    Deep_Copy d1(10) ;
    Deep_Copy d2(d1) ;
    d2.set(20) ;
    d1.print() ;    // 10
    d2.print() ;    // 20

    return 0 ;
}