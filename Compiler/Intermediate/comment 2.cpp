#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos = 0;
   int index;
	string str1= "*/the name is Shammo */";
    if ((index = str1.find('*/', pos)) != string::npos)
    {
       cout << "It is a multi-line comment";
        pos = index + 1;
    }
    else  if( (index = str1.find('/', pos)) != string::npos){
         cout << "It is a single-line comment" << index << endl;
      pos = index + 1;
    }
    else
    cout << "It is not a comment";
    
	return 0;
}
