/*
Print the following pattern
Pattern for N = 4
___1
__23
_345
4567

The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.

*/


#include<iostream>
using namespace std;


int main(){
    int totalrows;
    
    cin>>totalrows;
    
    int i=1;
    
    while(i<=totalrows)
    {
        int j=1;
        int num = i;
        while(j<=totalrows)
        {
            if(i+j<=totalrows)
            {
                cout<<" ";
            }
            else
            {
                cout<<num;
                num++;
            }
            j++;
        }
        i++;
        cout<<endl;
    }
    

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


