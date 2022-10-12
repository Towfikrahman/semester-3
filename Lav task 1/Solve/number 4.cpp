#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, tot;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
    {
        cin>>arr[i];
    }

    int elem1 = 100;
    int pos1 = 1;
    for(i=tot; i>=pos1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = elem1;
    tot++;


    int elem2 = 200;
    int pos2 = 6;
    for(i=tot; i>=pos2; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = elem2;
    tot++;

    int elem3 = 300;
    int pos3 = tot+1;
    for(i=tot; i>=pos3; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = elem3;
    tot0--;


    cout<<"Output array after addition: ";

    for(i=0; i<tot; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
