class String  // String Blue Print

{

    public :   // Public Section of the String which contains Constructor and Getter Functions.

   

    String () = delete ;  // Not use the Default Constructor but use The Parameter Constructor.



    String ( char String_Input_Name [] )   // Use Parameter constructor to take the input name and insert it in the string variable  ,
    
                                           // as well as calculating string length and put it in the string variable of the instance .
      {
        
        int  i ; 

        for ( i = 0 ; String_Input_Name[i] ; i++ )
        
          {
           
                 this -> String_Name[i] = String_Input_Name[i] ;

          }

                 this -> String_Length  =  i  ;

      }


    char * GetString_PTR_To_Char ( void )
   
     {

          return String_Name ;           // Public Getter Method to get the String Characters by returning it as a pointer to Character.
                                   
     }


   int GetString_intLength ( void )
   
     {
    
         return String_Length;           // Public Getter Mehod to get the String  Length  by  returning it as an integer return type .

     }
   
    
    private :    // Private Section of the String which contains un accessable variables of the class .

    
    char  String_Name [20] = ""  ;      // The private variable which is implemented to carry the string characters in it.
    
    int  String_Length = 0    ;         // The private variable which is implemented to carry  the  string  length in  it.

};


