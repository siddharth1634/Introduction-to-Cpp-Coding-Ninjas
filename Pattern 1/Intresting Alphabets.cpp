#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int j=1;
        char x = 65 + n - i;
        while(j<=i)
        {
            cout<<x;
          	x++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}

