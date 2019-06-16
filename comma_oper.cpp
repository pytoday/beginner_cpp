#include <iostream>
using namespace std;
 
int main()
{
   int i, j;
   
   j = 10;
   i = (j++, j+100, 999+j);
 
   cout << "i: " << i <<endl << "j++: "<< j++ << endl << "j+100: " << j+100 << endl;
   
   return 0;
}