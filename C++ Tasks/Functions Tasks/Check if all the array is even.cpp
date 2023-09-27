
int ArrayCheck_int_IsAllEven ( int arr[] , int Copy_ArrLength )

{
    // For Loop to move on all array elements.
    
    for( int i = 0 ; i < Copy_ArrLength ; i++ )
    
    {
        if ( arr[i] % 2 ! = 0 )
        
        {
        
            
            return 0 ;   // By using Reminder operation , if there is only one element reminder by 2 isn't equal to zero
            
                         // Then this element is  odd ,  so the array fails in the check and function  must  return zero .
        }

    }
    
    return 1;           // If all the Elements of the array pass the if  conidtion  so they are all even and we return 1 .
    
}


