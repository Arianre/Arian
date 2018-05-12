/* Calories Burned
Running on a particular treadmill you burn 3.9 calories per minute.
Write a program that uses a loop to display the number of calories 
burned after 10, 15, 20, 25, and 30 minutes. */

#include <iostream>
using namespace std;
main()
{
    
    float total ;
    float cal  = 3.9 ;
    int i;
    for(i = 10 ; i <=30 ; i += 5){
        
        total = i * cal ;
        cout<<"the amount of burning Calories in  " << i  << " mins is : " <<total <<endl;
        
        
    }
    
    return 0 ;
    
}