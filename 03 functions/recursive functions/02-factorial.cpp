
#include <iostream>
using namespace std;
int factorial(int number);
int main()
{
    
    int answer;
    answer=factorial(5);
    cout<<answer;

    return 0;
}
int factorial(int number){
   if(number==0){
       return 1;
   }
   else{
       return number*factorial(number-1);
   }
    
}