#include <iostream>

using namespace std;

//pow(2,3)=>2 * 2 * 2 =>8


int tavan(int base,int t){
	
  if(t == 0) return 1;
  else
  return base * tavan(base,t-1);
}


int main() 
{

   int x,y;
   cout<<"enter the number base:";
   cin>>x ;
   
   
   cout<<"enter the number tavan:";
   cin>>y ;
   
   cout<<"pow(base,t) is :" << tavan(x,y);
   return 0;
}







