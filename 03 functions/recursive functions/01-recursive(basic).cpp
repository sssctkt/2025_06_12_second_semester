
#include <iostream>
using namespace std;
int function(int term);
int main()
{
    //what is recursive function 
    //a function calling its own function
    //2...5..8..11..14
    int answer;
    answer=function(4);
    cout<<answer;

    return 0;
}
int function(int term){
   //recursive functions don't always return
   if (term==1){
       return 2;
   }
   else{
       return function(term-1)+3;
   }
    
}