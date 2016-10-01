#include<stdio.h>
typedef int DataType;
typedef struct ListNode
{
    DataType data;
    struct ListNode* next;
} Node;
int fact(int n)
{
    if(n == 2 || n == 1) 
    {
        return n;
    } else if ( n <= 0 ) {
        return 0;
    }

    return n * fact(n-1);
}
int f(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
    return 0;
}

int main()
{
    Node head;
    head.data = 1;
    Node p = head;
    p.data = 2;
    p = p->next;
    p.data =3;
    
}
