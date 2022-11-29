#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string x;
    cout<<"Input a string <?>";
    cin>>x;
    string str = "Input a string <?>"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}