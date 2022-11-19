#include<iostream>
using namespace std;

int main(){
	char input;
	input = cin.get();
    int ch=0,num=0,space=0;
    while(input != '$')
    {
        if((input>=65&&input<=90)||(input>=97&&input<=122))
        {
            ch++;
        }
        else if(input>=48 && input<=57)
        {
            num++;
        }
        else
        {
            space++;
        }
    	input = cin.get();
    }
    cout<<ch<<" "<<num<<" "<<space;
  
}
