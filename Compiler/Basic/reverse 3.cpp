#include <iostream> 
using namespace std;
 
int main() {
   string str = "I am Ironman";
 
   char ch;
   for (int index = 0, len = str.length(); index < len/2; index++) {
      ch = str[index];
      str[index] = str[len-1-index];
      str[len-1-index] = ch;
   }
 
   cout << str << endl;
}