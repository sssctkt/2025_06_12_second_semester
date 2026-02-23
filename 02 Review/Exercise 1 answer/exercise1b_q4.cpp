

#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin, sentence); //gets whole line as string input
    for (int i=0; i<sentence.size(); i++){
        if (sentence[i]>='a' && sentence[i]<='z'){
            sentence[i]-=32;
        }
    }
    cout<<sentence<<endl;


return 0;
}