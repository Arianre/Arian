/* 
Ocean Levels
Assuming the ocean's level is currently rising at about 1.5mm per year,
write a program that displays a table showing the number of mm that the ocean will have risen each ear for the next 25 years.
*/

#include <iostream>
using namespace std;
main()
{
    float rise = 1.5 ;
    int year = 25 ; 
    float total = year * rise ;
    
          cout<< " for nest 25 years the table woule be like this : "  << endl;
    
    for (int i = 1 ; i <= 25 ; i++){
        
        float total = i * rise ;
        cout<< " for year " << i << " ocean level rising  would be "<< total << endl; 
        
    }
    
    return 0 ;
    
}