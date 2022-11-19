#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    char x = 65;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<x;
            j++;
        }
        cout<<endl;
        x++;
        i++;
    }
}

