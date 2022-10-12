#include<iostream>
using namespace std;

int process( int x )
{
     if( x % 2 == 0 ){
         return 2;
     }
     else{
        return 1;
     }
}
int main()
{
    int n, even=0, odd=0;
    cout<<"Enter the array size: ";
    cin>>n;
    int array[n];

    for( int i=0; i<n; i++ ){
        cin>>array[i];
    }
    for( int i=0; i<n; i++ ){
        int re = process(array[i]);
        if( re == 2 ){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<odd<<" Odd numbers"<<endl;
    cout<<even<<" Even numbers"<<endl;
  return 0 ;
}
