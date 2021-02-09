#include<iostream>
extern int count;
void write_extern(void)
{
    int count;
std::cout << "Count is " << count << std::endl;
}
main()
{
    int count;
count = 5;
write_extern();
return 0;
}
