/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
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
     	
        while(j<=i)  
        {
            cout<<num;
           
            num++;
            
            j++;
        }
        
        i++;
        
        cout<<endl;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


