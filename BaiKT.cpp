#include <stdio.h>
int nguyenam (char ch)
{
    switch (ch)
    {
        case 'E':
        case 'e':
        case 'U':
        case 'u':
        case 'O':
        case 'o':
        case 'A':
        case 'a':
        case 'I':
        case 'i':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}
int main ()
{
    char ch;
    scanf ("%c",&ch);
    if (nguyenam(ch))
    {
        printf ("%c la nguyen am",ch);
    }
    else
    {
        printf ("khong la nguyen am");
    }
    return 0;
}
