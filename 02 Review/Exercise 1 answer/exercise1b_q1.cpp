
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence=""; //empyt string
    cout<<"Enter the phone number: ";
    getline(cin, sentence); //this is how you collect the whole sentence in a line 
    for (int i=0; i<sentence.size(); i++){
        if (sentence[i]>='a' && sentence[i]<='z'){
            sentence[i]-=32; //ascii table to upper case
        }
        //why I don't use else if here...(if I use else if, it's wrong, why??)
        if (sentence[i]>='A' && sentence[i]<='C'){
            sentence[i]='2';
        } //why now I can use else if here??
        else if (sentence[i]>='D' && sentence[i]<='F'){
            sentence[i]='3';
        }//..finish the rest
    }
    cout<<sentence<<endl;
    return 0;
}
