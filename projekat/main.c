#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
   int vrednost;
   struct Lista *sledeci;
} Lista;

Lista *napraviCvor()
{
    Lista *novi = malloc(sizeof(Lista));
    Lista->sledeci = NULL;

    printf("Uneti vrednost: ");
    scanf("%d", &novi->vrednost);

    return novi;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
