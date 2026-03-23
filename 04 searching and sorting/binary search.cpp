//linear search
#include <iostream>
using namespace std;
int bsearch(int a[], int item, int length, int &count);
int main()
{
    int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int index;
    //how can we find the size of the number array
    //an integer is 4 byte
    int size, count=0;
    size=sizeof(a)/sizeof(a[0]);
   
    
    index=bsearch(a, 10, size, count);
    if (index==-1){
        cout<<"The item doesn't exit"<<endl;
    }
    else{
        cout<<"The item is at index "<<index<<endl;
        cout<<"It took you "<<count<<" attempts";
    }
    return 0;
}

int bsearch(int a[], int item, int length, int &count){
    
    int lowest=0, highest=length-1;
    int middle;
    while(lowest<=highest){
        middle=(lowest+highest)/2;
        count=count+1;
        if (a[middle]==item){
            
            return middle;
        }
        else if (a[middle]<item){
            lowest=middle+1;
        }
        else{
            highest=middle-1;
        }
    }
    return -1;
}