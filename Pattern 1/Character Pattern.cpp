#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    
    int i=0;
    while(i<=n)
    {
        int j=1;
        char x = 64+i;
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


