#include <iostream>
using namespace std;

 main(){
int salary,tax,pay;
cout<< "please enter salary: ";
 cin>> salary;

if ( salary<=6000000) { 
tax=(0*6000000)/100;
pay=salary-tax;
}
else if(salary>=6000000&& salary<=8000000 ){
tax=(5*6000000&&8000000)/100;
pay=salary-tax;
}
else if( salary>=8000000&& salary<= 10000000 ){  
 tax=(10*8000000&&10000000)/100;   
 pay=salary-tax;
}
else if(salary>=10000000&& salary<=14000000){ 
tax=(15*10000000&&14000000)/100;
 pay=salary-tax;
}
else if( salary>=14000000&& salary<=18000000){
tax=(20*14000000&&18000000)/100;
pay=salary-tax;
}
else if( salary>=18000000&&salary<=25000000){
tax=(25*18000000&&25000000)/100;
pay=salary-tax;
}
else if( salary>=25000000){
tax=(35*25000000)/100;	
pay=salary-tax;	
}
}

