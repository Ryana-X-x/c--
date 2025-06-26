#include <iostream> 
#include <unistd.h>     // provides access to POSIX operating sysem API funtions, including fork(), execlp(), _exit()
#include <sys/wait.h> // provides functions for waiting for process state changes, like waitpid()
#include <vector> 
#include <cstring> 
//Provides functions for manipulating C-style strings, which are often needed when interacting with system calls that expect char* arguments (like execlp()).

using namespace std ;

class Process {
public: 
    // pid_t is an integer type for process IDs
    pid_t pid ;
    string name ;

    bool start(const string& program) {
        pid = fork() ;

        if (pid == 0) {
            cout << "[Child] Executing: " << program << endl ;

            execlp(program.c_str(), program.c_str(), NULL) ;

            perror("exec failed") ;
            _exit(1) ;

        } else if(pid > 0) {
            name = program ;
            cout << "[Parent] Started process '" << name << "' with PID " << pid << endl ;
            return true ;
        } else {
            perror("fork failed") ;
            return false ;
        }
    }
    void waitForExit() {
        int status ;
        waitpid(pid, &status, 0) ;
        cout << "[Parent] Process " << name << " with PID " << pid << " exited with status " << status << endl ;
    }

} ;
int main() {
    Process proc ;
    if (proc.start("ls")) {
        proc.waitForExit() ;
    }
    return 0 ;
}