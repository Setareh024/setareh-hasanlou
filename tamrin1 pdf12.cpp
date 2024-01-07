#include<iostream>
 using namespace std;
int fact(int t){
        if(t==0){
        return 1; 
   }       
  else {
  return t*fact(t-1);
  }
  }
float sin(float x){
      float s=x*x*x/fact(3);
      float t=x*x*x*x*x/fact(5);
   float b=x*x*x*x*x*x*x/fact(7);
   float r=x-s+t-b;
 
   return r ;

}
float cos(float x){
       float s=x*x/fact(2);               
      float  t=x*x*x*x/fact(4);
       float b=x*x*x*x*x*x/fact(6);
     float result=1-s+t-b;
     
    return result;

}

   int main(){
   	    float x;  	    
   	      cin>>x;
   	    float tan=sin(x)/cos(x);
   	   cout<<tan;
   	   	
   }



