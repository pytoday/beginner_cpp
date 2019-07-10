#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   int *ptr1;
 
   // 指针中的数组地址
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
 
      // 移动到下一个位置
      ptr++;
   }

    /*递减 */
    cout << "===============================" <<endl;
    // 指针中最后一个元素的地址
   ptr1 = &var[MAX-1];
   for (int i = MAX; i > 0; i--)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr1 << endl;
 
      cout << "Value of var[" << i << "] = ";
      cout << *ptr1 << endl;
 
      // 移动到下一个位置
      ptr1--;
   }
   return 0;
}