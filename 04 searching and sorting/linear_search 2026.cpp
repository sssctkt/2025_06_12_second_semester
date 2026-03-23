//linear search

#include <iostream>
using namespace std;
int lsearch(int a[], int item, int length);
int main()
{
    int a[]={4, 9, 10, 2, 3, 1, 5};
    //find the size of the number array 
    int size=sizeof(a)/sizeof(a[0]);
    //all integer stores in 4 bytes
    int index;
    index=lsearch(a, 20, size); //calling the function
    if (index==-1){
        cout<<"The item doesn't exist"<<endl;
    }
    else{
        cout<<"The item is at index "<<index<<endl;
    }
    
    return 0;
}
int lsearch(int a[], int item, int length){
    for (int i=0; i<length; i++){
        if (a[i]==item){
            return i;
        }
    }
    
    return -1;
}