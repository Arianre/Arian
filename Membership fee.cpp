/*
A country club, which currently charges $2,500 per year for membership, 
has announced it will increase its membership fees by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
*/
#include <iostream>
using namespace std;
main()
{
    float  total= 2500 ;
     
    float y = 0.04 ;
    int i ;
    
    for (i = 1 ; i <= 6 ; i++)
    {
        
       total = total + (total * y) ;
   
       cout<<"For Year " << i <<" The Price is : " <<total << endl;
    }
    
}