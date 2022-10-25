#include <stdio.h>
#include "list.h"
void createList(List *l)
{
    l->n=-1;
}
//*******************************************
int isEmpty(List l)
{
    return l.n==-1;
}
//********************************************
int isFull(List l)
{
    return l.n==MAX-1;
}
//*********************************************
int size(List l)
{
    return l.n+1;
}
//*********************************************
void push(List *l,Type el,int index)
{

    if(!isFull(*l))
    {
        if(index <= l->n && index >=0)
        {
            l->n++;
            l->items[l->n]=0;
            for(int i=l->n;i>index;i--)
            {
                Type temp = l->items[i];
                l->items[i] = l->items[i-1];
                l->items[i-1] = temp;
            }
            l->items[index] = el;
        }
        else if(index == l->n+1)
        {
            l->n++;
            l->items[l->n] = el;

        }
        else
        {
            printf("error:list must be contunous\n");
        }
    }
    else
    {
        printf("error:list overflow\n");
    }
}
//****************
/*need c++ to use function overloading :)
void push(List *l,Type el)
{
    if(!isFull(*l))
    {
        l->n++;
        l->items[l->n] = el;
    }
    else
    {
        printf("error:list overflow\n");
    }
}*/
//**************************************************
Type pop(List *l,int index)
{
    if(!isEmpty(*l))
    {
        if(index < l->n && index>=0)
        {
            for(int i=index;i<l->n;i++)
            {
                Type temp = l->items[i];
                l->items[i] = l->items[i+1];
                l->items[i+1] = temp;
            }
            l->n--;
        }
    }
    else
        printf("Error:list underflow\n");
}
//*****************
/*need c++ to use function overloading :)
Type pop(List *l)
{
    if(!isEmpty(*l))
    {
        l->n--;
    }
    else
        printf("Error:list underflow\n");
}*/
