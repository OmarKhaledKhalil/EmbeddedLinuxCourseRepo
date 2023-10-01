class String  // String Blue Print

{

    public :   // Public Section of the String which contains Constructor and Getter Functions.

   

    String () = delete ;  // Not use the Default Constructor but use The Parameter Constructor.



    String ( const char *String_Input_Name )   // Use Parameter constructor to take the input name and insert it in the string variable  ,
    
                                           // as well as calculating string length and put it in the string variable of the instance .
      {
        
        int  i ; 

        for ( i = 0 ; String_Input_Name[i] ; i++ )
        
          {

          }

                 this -> String_Length  =  i  ;

                 this -> String_Name = new char ( this-> String_Length + 1 );


           for ( i = 0 ; String_Input_Name [i] ; i++ )
        
          {

            String_Name [i] = String_Input_Name [i] ;

          }       

      }




    char * GetString_PTR_To_Char ( void )
   
     {

          return String_Name ;           // Public Getter Method to get the String Characters by returning it as a pointer to Character.
                                   
     }


   int GetString_intLength ( void )
   
     {
    
         return String_Length;           // Public Getter Mehod to get the String  Length  by  returning it as an integer return type .

     }
   


   //This is Copy Constructor.

   String ( const  String&  copy ) // Passing Const Refrence of the String we want to copy from.
   
   {
    this -> String_Length   =   copy.String_Length  ;       // Take the String Length from the Copy.

    this -> String_Name  = new char ( String_Length + 1 ) ; // Allocate a suitable size in the Heap for the String Copied .

    strcpy ( this->String_Name , copy.String_Name ) ;       // Fill the New Location in heap with the copied string using strings Function .
   }



   //This is Copy Overload ( = ) operator .

   String& operator = (const String& temp )
   
   {

    if ( temp.String_Name != this-> String_Name )  // check if the two strings are the same or not from begining.
    
      {

        this->String_Length = temp.String_Length;                    // Take the String Length from the Copy.
        
        if ( this->String_Name )                                     // De allocate existing Memory locations if any.
         
         {
            delete this->String_Name ;

         }
        
         this->String_Name = new char ( this->String_Length + 1 ) ;  // Allocate a suitable size in the Heap for the String Copied .

         strcpy ( this->String_Name , temp.String_Name ) ;           // Fill the New Location in heap with the copied string using strings Function .
     
      }

      return *this;

   } 



    //This is Move Constructor .

    String ( String && expired_str )
   
{

        this->String_Length = expired_str.String_Length ; // Take the String Length from the Copy.
        
        expired_str.String_Length = 0 ;                   // Assigning the Expired length to zero.

        this->String_Name = expired_str.String_Name ;     // Assigning the New Ptr to Points to same location of Expired Ptr.
        
        delete expired_str.String_Name;                   // De-allocate the Expired Str from heap.

        expired_str.String_Name = nullptr ;               // Assigning the Expired Ptr Zero.

    }

    //This is Move Overload ( = ) operator .

    String& operator =  ( String && expired_str )
   
{
        if( expired_str.String_Name != this->String_Name )
        
        {
            this->String_Length = expired_str.String_Length;  // Take the String Length from the Copy.

            expired_str .String_Length = 0 ;                  // Assigning the Expired length to zero.

            if ( this->String_Name )
            {
                delete this-> String_Name ;                   // De allocate the old locations from heap if any.
            }
            
            this->String_Name = expired_str.String_Name ;     // Assigning the New Ptr to Points to same location of Expired Ptr.

            delete expired_str.String_Name ;                  // De-allocate the Expired Str from heap.

            expired_str.String_Name = nullptr ;               // Assigning the Expired Ptr Zero.
        }

        return *this;

    }


 //This is the Destructor.

 ~ String ( )

{
    
    delete String_Name ;
    
}



    private :    // Private Section of the String which contains un accessable variables of the class .

    
    char * String_Name = nullptr  ;      // The private variable which is implemented to carry the string characters in it.
    
    int  String_Length = 0        ;      // The private variable which is implemented to carry  the  string  length in  it.
 
};

