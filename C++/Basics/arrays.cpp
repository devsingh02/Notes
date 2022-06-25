//sizeof() function gives FULL SIZE of anything that is put into it. [2 int values = 2x4=8 bytes]

//strings --> s.length()
//arrays  --> sizeof(a)/sizeof(a[0])    [prefer user's input variable]
#include<iostream>
using namespace std;

int main(){
    
    //Known
    int arr[]={1,2,3,4,5}; //OR  int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl; //5x4(int)=20bytes

    //Unknown : Sequence is imp. (size must be initialised before array)
    int size;
    cout<<"Enter Size : "; cin>>size;
    int a[size];
    cout<<"Enter Values : "<<endl;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){ //sizeof(a)/sizeof(a[0]) = size
        cin>>a[i];
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
}