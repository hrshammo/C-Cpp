#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos = 0;
   int index;
    cout <<"Input Commend or Comment";
	string str1;
     cin >>str1;
    string single = "//";
    string multi ="/*";
    if ((index = str1.find(multi, pos)) != string::npos)
    {
       cout << "It is a multi-line comment";
        pos = index + 1;
    }
    else  if( (index = str1.find(single, pos)) != string::npos){
         cout << "It is a single-line comment" << index << endl;
      pos = index + 1;
    }
    else
    cout << "It is not a comment";
    
	return 0;
}
