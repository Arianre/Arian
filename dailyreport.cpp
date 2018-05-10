/* 
Write a program that displays a weekly payroll report.
A loop in the program should ask the user for the employee number, gross pay, state tax, federal tax, and FICA witholdings.
The loop will terminate when 0 is entered fir the employee number. 
After the data is entered, the program should display totals for gross pay, state tax, federal tax, FICA witholdings and net pay.
Validation: Do not accept negative numbers for any of the items entered. 
Do not accept values for state, federal or FICA that are greater than the gross pay.
If the sum state tax + FICA for any employee is greater than gross pay, 
print an error message and ask the user to re-enter the data for that employee.

*/




#include <iostream>
using namespace std;
main()
    {
        int empnum = 1 ;
        double grossPay = 0.0 ,stax = 0.0 ,ftax = 0.0 ,fitax = 0.0 , netpay= 0.0; 
        
        while(empnum != 0 )
        { 
        
        cout<<"Please Enter  employye ID : "<<endl;
        cin>>empnum;
            if(empnum != 0 ){
        double empgrosspay = 0.0  , empstax = 0.0  , empftax = 0.0  , empfitax= 0.0 ;
        double plustax    =   empstax + empfitax ; 
        bool wrong ;
        
        
           do{
            // EMPLOYEE GROSS PAY
               cout<<"Please Enter Employee Gross Pay :  " << endl;
               cin>> empgrosspay;
            // EMPLOYEE STATE TAX  
               cout<<"Please Enter Employee State Tax :  " << endl;
               cin>> empstax;
            //EMPLOYEE FEDRAL TAX
               cout<<"Please Enter Employee Federal Tax :  " << endl;
               cin>> empftax;
            //EMPLOYEE FICA TAX      
              cout<<"Please Enter Employee FICA Tax :  " << endl;
               cin>> empfitax;
            // CHECK THE NEGATIVE NUMBERS        
                    if(empgrosspay < 0 || empstax < 0 || empftax < 0 || empfitax < 0)
                    {
                        cout<<"**** Wrong Data Check Your Numbers **** " << endl;
                        wrong = true;
                    }
            //CHECK THE GROSS PAY BIGGER THAN OTHERS       
                    else if (empstax > empgrosspay || empftax > empgrosspay || empfitax > empgrosspay){
                        cout<<"*** Your Taxes Can Not Be More Than Your Gross Pay " <<endl;
                        wrong = true;
                    }
            //CHECK THE SUM OF FICA + STATE TAX
                    else if(plustax > empgrosspay){
                        cout<<"*** Your State and FICA Taxes are More Than Your Gross Pay " <<endl;
                        wrong = true;
                    }
            
                    else
                    wrong = false;

             
                } while(wrong);
                                    
                    
                    
                    grossPay    = empgrosspay ;
                    stax        = empstax ;
                    ftax        = empftax ;
                    fitax       = empfitax ;
                    netpay      = empgrosspay - (stax + ftax + fitax) ;
                
            }

        }
            cout<<" The Net Pay Is      $ "<< netpay<< endl;  
            cout<<"Gross Pay total is : $ "<< grossPay << endl;
            cout<<"State Pay total is : $ "<< stax  << endl;
            cout<<"Fedral Pay total is : $ "<< ftax << endl;
            cout<<"FICA Pay total is : $ " << fitax << endl;
                    
        return 0;
    }