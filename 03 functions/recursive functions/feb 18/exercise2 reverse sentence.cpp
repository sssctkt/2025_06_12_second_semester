
#include <iostream>
#include <string>
using namespace std;
string reversestring(string sentence, int size);
int main()
{
    string sentence="chris";
    string answer;
    answer=reversestring(sentence, sentence.size());
    cout<<answer;
    return 0;
}
string reversestring(string sentence, int size){
    if (size==1){
        string s="";
        s+=sentence[size-1];
        return s;
    }
    else{
        return sentence[size-1]+reversestring(sentence, size-1);
    }
}