#include <iostream>
using namespace std;

/* 前缀形式与后缀形式之间有一点不同。如果使用前缀形式，则会在表达式计算之前完成自增或自减，如果使用后缀形式，则会在表达式计算之后完成自增或自减 */
 
int main()
{
   int a = 21;
   int c ;
 
   // a 的值在赋值之前不会自增
   c = a++;   
   cout << "Line 1 - Value of a++ is :" << c << endl ;
 
   // 表达式计算之后，a 的值增加 1
   cout << "Line 2 - Value of a is :" << a << endl ;
 
   // a 的值在赋值之前自增
   c = ++a;  
   cout << "Line 3 - Value of ++a is  :" << c << endl ;
   return 0;
}