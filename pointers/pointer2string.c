#include <stdio.h>

/**
* main - prints pointer elaments and addresses
*
* Return: 0
*/
int main()
{
    char a[7] = "School";
    
    printf("%c\n", *(a + 4));
    printf("%c\n\n", a[4]);
    
    printf("%p\n", &a[0]);
    printf("%p\n\n", a);
    
    printf("%p\n", &a[1]);
    printf("%p\n", a + 1);
    return 0;
}

