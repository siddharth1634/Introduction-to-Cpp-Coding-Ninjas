/*
Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;


int main(){
	int N;
    cin>>N;
    
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<2*N)
        {
            if(i+j<=N)
            {
                cout<<" ";
            }
            else if(i+j>N&&j-i<N)
            {
                cout<<"*";
            }
            j++;
        }
        i++;
        cout<<endl;
    }
}
