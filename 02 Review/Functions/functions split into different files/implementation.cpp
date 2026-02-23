#include "functions.h"
//in this case you also need to include iostream because 
//you have cout 
#include <iostream>
using namespace std;
void message(){
    cout<<"Welcome, to your top six calculator";
    
}
float calc(float math, float sci, float eng, float bio, float physics, float chem){
    float answer=(math+sci+eng+bio+physics+chem)/6.0;
    return answer;
}
bool pass(float top_six_average){
    if (top_six_average>90){
        return true;
    }
    return false;
}