#include<iostream>
#include<stdio.h>
#include<string>

using namespace std ;

//if statement

void  checkIf (int number) {
    if (number > 20)  {
        cout << "Number is greater than 20" << endl ;
    } else {
        cout << "Number is not greater than 20" << endl ;
    }
}

// arithmetic if(ternary) operator:
// returnValue = (condition) ? result1 : result2 ;
void arithmeticIf(int n1, int n2) {
    int lower = (n1 <= n2) ? n1 : n2 ;
    cout << "Lower is: " << lower << endl ; 
}

// Switch Statement
void switchSt() {
    int option ;

    cout << "Enter your state: 1-Delhi, 2-Assam, 3-Mumbai" << endl ;
    cin >> option ;

    switch(option) {
        case 1: cout << "Your state has been set to Delhi" << endl ;
                break ;
        case 2: cout << "Your state has been set to Assam" << endl ;
                break ;
        case 3: cout << "Your state has been set to Mumbai" << endl ;
                break ;
        default: cout << "Invalid option selected" << endl ;
    }
}

void whileCount() {
    int count = 1 ;
    while(count <= 10) {
        cout << "Count is: " << count << endl ;
        count ++ ;
    }
}

// do while: it always runs atleast once
void doWhileAuthenticate() {
    string correctUsername = "admin" ;
    string correctPassword = "1234" ;

    string username ;
    string password ;
    bool authenticate = false ;

    do {
        cout << "Enter username: " << endl ;
        cin >> username ;

        cout << "Enter password: " << endl ;
        cin >> password ;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access granted!" << endl ;
            authenticate = true ;
        } else {
            cout << "Incorrect password or username. Try again" << endl ;
            // break ;
        }
    } while(!authenticate) ;
}

int main() {
    checkIf(30) ;
    arithmeticIf(30, 25) ;
    // switchSt() ;
    whileCount() ;
    doWhileAuthenticate() ;
}