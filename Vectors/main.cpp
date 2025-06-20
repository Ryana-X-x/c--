/* Vectors are dynamic array-like data structure that stores
    elements of the same data type in a contigous fashion that 
    can resize itself automatically unlike arrays which means 
    vectors can grow when an element is inserted or shrink
    when element is deleted
    
    Vectors are present in C++ Standard Template Library(STL)
*/

#include<iostream>
#include<vector>

using namespace std  ;

int main() {
    vector<int> numbers ;

    //push_back()
    numbers.push_back(10) ;
    numbers.push_back(20) ;
    numbers.push_back(30) ;

    cout << "Element at index 1: " << numbers.at(1) << endl ;
    cout << "Element at front: " << numbers.front() << endl ;
    cout << "Element at back: " << numbers.back() << endl ;

    //pop_back()
    numbers.pop_back() ;
    cout << "------------------" << endl ;
    cout << "After pop back the element at back is: " << numbers.back() << endl ;
    
    //erase()
    // remove element at index 1
    numbers.erase(numbers.begin() + 1) ;

    //empty()
    if (numbers.empty()) {
        cout << "------------------" << endl ;
        cout << "Vector is empty!" << endl ;
    } else {
        cout << "------------------" << endl ;
        cout << "Vector is not empty!" << endl ;
    }

    //clear()
    // Removes all elements
    numbers.clear() ;
    if (numbers.empty()) {
        cout << "------------------" << endl ;
        cout << "Vector is empty!" << endl ;
    } else {
        cout << "------------------" << endl ;
        cout << "Vector is not empty!" << endl ;
    }

    return 0 ;

}