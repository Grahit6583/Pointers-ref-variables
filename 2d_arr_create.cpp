#include<iostream>

using namespace std;

int main()
{
    int rows;
    int cols;

    cout<<"Enter the rows and cols : ";
    cin>>rows>>cols;

    int i,j;
    // creation of 2d array
    int **arr = new int*[rows];
    for(i=0;i<rows;i++)
    {
        arr[i] = new int[cols];
    }

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // deletion of memory

    for(i=0;i<rows;i++)
    {
        delete []arr[i];
    }
    delete []arr;
}