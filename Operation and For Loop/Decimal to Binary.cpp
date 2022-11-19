#include<iostream>
using namespace std;

int main() {
	long long n;
    cin>>n;
    
    long long rem,val=0,i;
    for( i=1; n!=0; i*=10)
    {
        rem = n%2;
        val =  val + rem * i;
        n/=2;
    }
    cout<<val;
}
