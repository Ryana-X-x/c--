#include<iostream>
#include<string>

using namespace std ;

int main() {
    string fruits[] = {"Apple", "Banana", "Orange", "Grapes"} ;

    for (int i = 0; i < 4 ; ++i) {
        cout << "Fruits at index " << i << ": " << fruits[i] << endl ;
    }

    return 0 ;
}