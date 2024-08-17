#include<iostream>

using namespace std;

void update(int &);

int main()
{
    int i = 8;
    int &j = i;
    int k =10;
    int *l = &k;
    char m[10] = "asdfghjkl";
    char *p = &m[5];
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    cout<<&j<<endl;
    cout<<&i<<endl;
    update(i);
    cout<<i<<endl;
    *l=*l+1;
    cout<<*l<<endl;
    cout<<k<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    p = &m[0];
    cout<<*p<<endl;
    return 0;
}

void update(int &k)
{
    k++;
}