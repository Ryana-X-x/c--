#include <iostream>
#include <string> 

using namespace std ;

enum ShipStatus {
    Docked, // 0
    Orbitting, // 1
    Hyperspace, //2
    Crashed //3
} ;

enum class CargoType {
    FoodSupplies, 
    FuelCells, 
    AlieanArtifacts, 
    SpaceGems
} ;

string getCargoInfo(CargoType cargo) {
    switch(cargo) {
        case CargoType::FoodSupplies:
            return "Khana hai" ;
        case CargoType::FuelCells: 
            return "Fuel khatam hai" ;
        case CargoType::AlieanArtifacts:
            return "Aliens ka samaan" ;
        case CargoType::SpaceGems:
            return "Aliens ki gems" ;
        default: 
            return "Unknown cargo!" ;
    }
}

int main() {
    ShipStatus ship = Orbitting ;
    CargoType cargo = CargoType::AlieanArtifacts ;


    if (ship == Orbitting) {
        cout << "Ship is orbitting a planet" << endl ;
    } else if (ship == Crashed) 
        cout << "MayDay!" ;
    

    cout << "Cargo: " << getCargoInfo(cargo) << endl ;

    cout << "Ship: " << ship << endl ;
    cout << "Cargo type value: " << static_cast<int>(cargo) << endl ;

    return 0 ;
}