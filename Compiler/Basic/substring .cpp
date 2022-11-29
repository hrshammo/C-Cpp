#include<iostream>  
using namespace std;  
int main()  
{  
string str = "The Name is SHAMMO <?>"  ;
string substring = "";  
substring = str.substr(12,6);  
cout<<"Substring is : "<< substring;   
return 0;  
}   