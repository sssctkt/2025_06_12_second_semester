/* you need to know how to split the function*/
// main file, implementation file, header file 
// you also need to know what does it by returning (or not returning)
// a value
#include <iostream>
void message(); //function declaration
float calc(float math, float sci, float eng, float bio, float physics, float chem);
bool pass(float top_six_average);
using namespace std;
int main()
{
    message(); //calling the function
    float math, sci, eng, bio, physics, chem;
    float top_six_average;
    cout<<"Enter grade for math, sci, eng, bio, physics, chem: ";
    cin>>math>>sci>>eng>>bio>>physics>>chem;
    top_six_average=calc(math, sci, eng, bio, physics, chem);
    cout<<"Your top six average is: "<<top_six_average<<endl;
    if (pass(top_six_average)==true){
        cout<<"You are into McMaster Health Sci";
    }
    return 0;
}
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