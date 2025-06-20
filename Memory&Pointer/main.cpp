#include <iostream>
using namespace std ;

void showPointerExample() {
    int* dynamic = new int(55) ;    // heap allocation
    int value = 100 ;
    int* ptr = &value ;     // stack allocation

    cout << "value: " << *ptr << endl ;
    cout << "dynamic: " << *dynamic << endl ;

    delete dynamic ;    // clean heap
}

