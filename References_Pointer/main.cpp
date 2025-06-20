/*
    Pointers: Let you allocate and manage objects dynamically,
    essential for objects that live beyond a function's scope . 
*/

/*
    References: Let you access or read those objects efficiently
    without copying them.
*/
#include<string>
#include<iostream>

using namespace std ;

struct Connection{
    int socketId ;
    string clientIP ;
    bool isActive ;
    
    void printStatus() const{
        cout << "Socket: "  << socketId 
             << ", IP: "    << clientIP
             << ", Active: "<< (isActive ? "Yes" : "No") << "\n" ;
    }
} ;

Connection* createConnection(int id, string ip) {
    Connection* conn = new Connection{id, ip, true} ;   // allocated on heap
    return conn ;
}

void closeConnection(Connection* connPtr) {
    connPtr->isActive = false ;
}

void logConnectionStatus(const Connection& connRef) {
    cout << "[LOG]";
    connRef.printStatus();
}

int main() {
    // conn1 is a pointer to a Connection object allocated on the heap.
    // createConnection returns a pointer, so conn1 "points to" the new Connection.
    Connection* conn1 = createConnection(101, "192.168.1.10") ;
    
    // logConnectionStatus expects a reference to a Connection.
    // *conn1 dereferences the pointer, giving us the actual Connection object,
    // which is then passed by reference (const Connection&) to avoid copying.
    logConnectionStatus(*conn1) ;

    // closeConnection expects a pointer to a Connection.
    // We pass conn1 directly, so the function can modify the actual object on the heap.
    closeConnection(conn1) ;

    // Again, we dereference conn1 to pass the Connection object by reference for logging.
    logConnectionStatus(*conn1) ;

    // delete frees the memory allocated for the Connection object on the heap.
    delete conn1 ;
    return 0 ;
}