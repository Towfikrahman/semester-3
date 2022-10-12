#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int array[n];

    for( int i = 0; i < n; i++ ){
        cin>>array[i];
    }
    for(int i = 0; i < n; i++ ){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for( int i = n-1; i >= 0; i-- ){
        cout<<array[i]<<" ";
    }
    return 0 ;
}
