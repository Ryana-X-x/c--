#include <iostream>
#include <cassert>

using namespace std ;

enum class AttackType {
    Laser, 
    Missile, 
    Punch
} ;

enum class AttackTypeError {
    InvalidMove,
} ; // not using this but can make custom errors like this

void performAttack(AttackType attack){
    assert(static_cast<int>(attack) >= 0 && static_cast<int>(attack) <= 2
    && "invalid Attack Type")  ;

    switch(attack) {
        case AttackType::Laser: 
            cout << "Firing Laser Beams! " << endl; 
            break ;

        case AttackType::Missile: 
            cout << "Misille Fired! " << endl; 
            break ;
        case AttackType::Punch: 
            cout << "Punching! " << endl; 
            break ;
    }
}

int main() {
    AttackType attack = AttackType::Laser ;
    performAttack(attack) ;

    attack = static_cast<AttackType>(999) ;
    performAttack(attack) ;

    return 0 ; 
}