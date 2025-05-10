#include <iostream>

using namespace std ;

int main() {
    cout << "Variables and Constants with Ryana!" << endl ;

    int score ;     // Declared the variable score
    score = 250 ;
    cout << "Score is: " << score << endl ;

    const int uid = 1234 ;
    // uid = 3212  ;   // Error becuase we used const
    cout << "uid is: " << uid << endl ; 

    return 0 ;
}