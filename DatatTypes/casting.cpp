#include <iostream> 

using namespace std ; 

int main() {
    float teaPrice = 49.99 ;
    int roundedTeaPrice = (int) teaPrice ; // 49

    int teaQuantity = 2 ;  
    // int totalPrice = teaPrice * teaQuantity ; 
    double totalPrice = teaPrice * teaQuantity ;

    cout << roundedTeaPrice << endl  ;
    cout << totalPrice << endl ; 
}