#include <iostream>
#include <string>
using namespace std;
 
 
 // These Macros Shall be used in C files , but you have to create Global Instance of the Class Function Back Trace.
 // These Global Instance Shall be Called a  , ex : - Function_BackTrace a ; ( Global Variable )  
 #define       (a.EnterFn(__FUNCTION__))    EnterFn
 #define       (a.ExitFn (__FUNCTION__))     ExitFn




class Function_BackTrace

{

  public:

  Function_BackTrace () = default ;                       // Constructor  is  set  to  Default .
 
  void EnterFn (  string  func )
  
  {

    Functions_Called [i] = func   ;                       // Fill Strings  Array  of  Functions  Called  when  call  a function.
 
    i++;

  }

  void ExitFn (  string  func )
  
  {

     Functions_Released [j] = func;                       // Fill Strings Array of Functions Return when Return from a function.

     j++;

  }

  ~ Function_BackTrace()                                  // Destructor of the Class , shall print all Functions Called one by one 
                                                          // And Functions Returned one by one , after the Life Time of the Global
                                                          // Instance Vanished.
                                                          
  {

    cout<<" Functions Called are " << endl ;

    for(int a = 0 ; a < i ; a++)
    {

      cout << a << " :" << Functions_Called [a] << endl    ;

    }

    cout<<" Functions Returned are " << endl ;

     for(int a = 0 ; a < j ; a++)
    {

      cout << a << " :" << Functions_Released  [a] << endl ;

    }

    i=0;

    j=0;

  }

  private:                // First in First out ( Queue ) Method is used to Represent Functions called and Functions Returned.


  static int i;
  static int j;
  static  string Functions_Called   [50];            // Static Array of Strings for  Called  Functions.
  static  string Functions_Released [50];            // Static Array of Strings for Returned Functions. 


};

//Intializing the Static Variables of The Class in C file , as well as The Global Instance of the Class (a) which is used with Macros.

int Function_BackTrace :: i = 0 ;

int Function_BackTrace :: j = 0 ;


string Function_BackTrace:: Functions_Called   [50];

string Function_BackTrace:: Functions_Released [50];

Function_BackTrace a;




// Trial Function , to test the Function BackTrace Class .


void func2 ()

{

  EnterFn;  //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.

  ExitFn;   //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.

}


// Another Trial Function , to test the Function BackTrace Class .

void func1 ()
{

  EnterFn;   //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.


  func2();
 
  ExitFn;    //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.


}




int main ( ) 

{

  EnterFn; //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.


  func1();

   ExitFn; //Macro Defined at the top of this example , which call function from instance of the class to store the name of the function.


  
  return 0;

}
