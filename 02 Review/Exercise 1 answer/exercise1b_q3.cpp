//exercise 1b q3....see if you can change this example to your liking

#include <iostream>
using namespace std;

int main(){
size_t found; //size_t is kind of like int. it's mainly used for array indexing and loop counting
//size_t can store the maximum size of a theoretically possible object of any type (including array)
string word="Well, superman is the strongest superhero";
string phrase="bat";
found=word.find("super"); //will return the index of where the first word (in this case, "super") begins




while(found!=string::npos){ //string::npos will give a special value when it reaches the end position of a string
        word=word.replace(found, 5, phrase ); //the word super has 5 letters
        //for replace you need
        //1. position to be replaced
        //2. the length to be replaced
        //3. The word to substitute with
        found=word.find("super", found+1); //find the next one
        //if it cannot be found, it will give a special value (string::npos) when it reaches the end position of a string
}
cout<<"New sentence becomes: ";

cout<<word;



return 0;
}