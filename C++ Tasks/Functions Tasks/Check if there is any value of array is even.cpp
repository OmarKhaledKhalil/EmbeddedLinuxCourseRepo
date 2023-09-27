

int ArrayCheck_int_ContainsOnlyOneEven ( int arr[] , int Copy_ArrLength )

{
    for( int i = 0 ; i < Copy_ArrLength ; i++ )
   
    {
       
       if ( arr[i] % 2 ! = 0 )
        
        {
            
            return 1;  // By using Reminder operation by 2 ,  if the value = 0 , then it is  an Even Element
            
                       // Since There is at least one Even Number then the  check  is done and we  return  1 .  
        } 


    }
 
   
    return 0;         // If function doesn't return from for all the for loop , so there isn't any evenNumber.

}


