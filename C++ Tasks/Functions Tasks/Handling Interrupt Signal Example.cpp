#include <csignal>
#include <iostream>
using namespace std;
  
void signal_handler ( int  signal_num )  // Implementation for Signal Handler , which will print the number of this signal
                                     // and  terminates  the  running program.
{
    cout << "\nThe interrupt signal is ("  << signal_num  <<  ")   \n" ;
    cout << "Program is Terminated due to the interrupt signal     \n" ;
    
    exit(signal_num);                // This function terminates the  program.

}
  
int main ( )

{
    // Sends to signal function the Number of the Interrupt signal and the void handler function.

    signal(SIGINT, signal_handler);
  
    // Super loop System Program , will operate in the terminal till the interrupt signal came  .
    // The   interrupt   Signal   is   Ctrl+C  ,  which  will  terminate  the  running  program .

    while (1)
    
    {

        cout << "Program is Running" << endl;
    
    }
        
    return 0;
    
}
