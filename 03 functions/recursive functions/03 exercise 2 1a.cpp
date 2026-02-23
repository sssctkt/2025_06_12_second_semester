
#include <iostream>
using namespace std;
int function(int term);
int main()
{
    
    int answer;
    answer=function(5);
    cout<<answer;

    return 0;
}
int function(int term){
   if(term==1){
       return 3;
   }
   else{
       return function(term-1)+2;
   }
    
}