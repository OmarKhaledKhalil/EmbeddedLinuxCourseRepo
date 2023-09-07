#include <bits/stdc++.h>
using namespace std;


// Method  1  Without   any  Checks.


int Array_int_FindMaxNumber(int arr[],int copy_Int_ArrLength)

{
    //Sorting the array using Sort using sort() Functions , by Passing to it Two Pointers.
    //First  Pointer  is  looking  at  the  least  significant  location   of   the  Array.
    //Second Pointer  is  looking  at  the  least  significant  location   of   the  Array.
    
    sort(arr,arr+copy_Int_ArrLength);

    //Returning the last  Element in  the  Array  after  Sorting  it  in  Ascending  Order  
    //By Ensuring  that  the  last  element  shall be  the Max  Value  after  The  Sorting. 
    
    return arr[copy_Int_ArrLength-1];

}



// Method 2 With Array Length Check.



int Array_int_FindMaxNumber_WithCheck(int arr[]  ,int copy_Int_ArrLength,int * return_value_Ref)

{
    
    //Checking  on  array  length  if  it  is  zero  or  less it will  return  an  error .

    if  ( copy_Int_ArrLength <= 0 )
    {

        return 0 ; //Returning Zero Means Operation isn't Okay.

    }



    else
    {

    //Sorting the array using Sort using sort() Functions , by Passing to it Two Pointers.
    //First  Pointer  is  looking  at  the  least  significant  location   of   the  Array.
    //Second Pointer  is  looking  at  the  least  significant  location   of   the  Array.
    
    sort ( arr , arr+copy_Int_ArrLength );




    //Writing the Max Number of the array after sorting to the Variable  Location in  Memory .
    //Using the Dereference to assign the value of Max element to the sent location correctly.
    
    
    *  return_value_Ref = arr[ copy_Int_ArrLength - 1 ];
    
    }


        return 1 ; //Returning One Means Operation is Okay.

}
