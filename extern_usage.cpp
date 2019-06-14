#include <iostream>
int count;
extern void write_extern();

int main()
{
    count = 12;
    write_extern();
}