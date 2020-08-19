
//  Created by rita asmah on 07/06/2020.
//  Copyright © 2020 rita asmah.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
// Double data type
double principal, Interest_Rate, Span_Time;

cout<<"Hello! Welcome";
    
cout<<"\nPlease input The Principal Amount: ₵ ";
cin>>principal;
    
cout<<"\nNext input The Interest Rate: ";
cin>>Interest_Rate;
    
cout<<"\nInput The Span Time in years: ";
cin>>Span_Time;

double COMP_INT = principal*(pow((1 + Interest_Rate/100),Span_Time));

cout<<"\nCompound Interest: ₵ "<<COMP_INT<< " Thank You"<<endl;

return 0;

}


