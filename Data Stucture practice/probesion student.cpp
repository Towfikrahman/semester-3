/*

Write a Structure named Student with the following attributes:
int id
string name
double cgpa
char gender
int creditCompleted
string department

The structure also has the following method:
bool checkProbation( )
The method checks for students whose cgpa is less than 2.5.

Write a main method to create an array of 5 students and print the name of the probation students from the array.

*/

#include<iostream>
using namespace std;
int main()
{
    int n, id, creditcom;
    cout<<"How many student you want: ";
    cin>>n;
    string name[n], department, gender;
    double cgpa[n];

    for( int i=0; i<n; i++ )
    {
        cout<<"Name: ";
        cin>>name[i];
        cout<<"Cgpa: ";
        cin>>cgpa[i];
        //cout<<"gender: ";
        //cin>>gender;
        //cout<<"credit complete: ";
        //cin>>creditcom;
        //cout<<"department: ";
        //cin>>department;

    }

    cout<<"Probation Student Name: ";
   for( int i=0; i<n; i++ )
   {
       if(  cgpa[i] < 2.50 )
        cout<<name[i]<<" ";
   }



return 0;
}
