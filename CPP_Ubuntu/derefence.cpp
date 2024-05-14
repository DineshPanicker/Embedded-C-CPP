#include <iostream>

int *allocate_mem()
{
    return new int;
}
int main()
{
    int studentIDs[100];
    for (int i = 0; i < 100; i++)
    {
        studentIDs[i] = i;
    }
    printf("%p", studentIDs);
    return 0;
}