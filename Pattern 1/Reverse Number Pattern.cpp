#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {	
        int x=i;
        int j=1;
        while(j<=i)
        {
            cout<<x;
            x--;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}


