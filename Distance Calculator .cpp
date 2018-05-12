/*
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
Write a program that asks the user for the speed of a vehicle and how many hours it has traveled. 
The program should then use a loop to display the distance the vehicle traveled for each hour of that time. 

*/

#include <iostream>
using namespace std;
main()
{
    int times ; // miles per hour
    float speed ; // how many hours
    float distance = times * speed ; // distance
    
    
    cout<< "Please enter the speed " << endl ;
        cin>> speed;
    cout<<"Please enter the time of driving " << endl;
        cin>>times;
  
   cout<< "You entered " << times << " hours so your distance travelled is  " << speed * times  << endl ;
    for( int i=1 ; i <= times ; i++)
        {
            cout<<"Hour " << i <<  " you traveled "  << i * speed << endl <<" miles" << endl; 
        }
    return 0 ;
     
}