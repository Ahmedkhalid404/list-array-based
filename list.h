#ifndef LIST
#define LIST
#define MAX 500
typedef int Type;
typedef struct {
    Type items[MAX];
    int n;
}List;
void createList(List *l);
int isEmpty(List l);
int isFull(List l);
int size(List l);
void push(List *l,Type el,int index);
Type pop(List *l,int index);

#endif // LIST

//******************************************************
//*************************************************




