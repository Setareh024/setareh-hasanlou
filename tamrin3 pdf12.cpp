#include <iostream>

using namespace std;

int lili(int x,int y){
	
while (y!=0){
	    int s=y;
	    y=x%y;
	    x=s; 
   }	
   return x;
   }

int main () {
	      int s,h;
	              cout<<"please enter your first number:";
	     cin>>s;
                
                 cout<<"please enter your second number:";
         cin>>h;   

         int a=lili(s,h);
         cout<<"the result is:"<<a; 
         return 0;
         
    return 0;    
}
