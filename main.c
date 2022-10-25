#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main()
{
    List l;
    createList(&l);
    for(int i=0;i<10;i++)
    {
        push(&l,i,0);
    }
    //printf("%d\n",size(l));
    for(int i=0;i<=l.n;i++)
        printf("%d\n",l.items[i]);
    pop(&l,5);
    pop(&l,5);
    printf("------------------------------\n");
    for(int i=0;i<=l.n;i++)
        printf("%d\n",l.items[i]);
    return 0;
}
