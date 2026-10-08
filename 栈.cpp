#include<iostream>
using namespace std;
#define MaxSize 5
typedef int ElemType;
struct SqStack
{
    ElemType data[MaxSize];
    int top;
};
void initStack(SqStack*& s)
{
    s = new SqStack;  s->top = -1;
}
void destroyStack(SqStack*& s)
{
    delete s;   s = NULL;
}
bool isEmpty(SqStack* s)
{
    return s->top == -1;
}

bool isFull(SqStack* s)
{
    return s->top == MaxSize - 1;
}
bool push(SqStack*& s, ElemType e)
{
    if (s->top == MaxSize - 1)return false;
    s->top++;
    s->data[s->top] = e;
    return true;
}
bool pop(SqStack*& s, ElemType& e)
{
    if (s->top == -1)return false;
    e = s->data[s->top];
    s->top--;
    return true;
}
bool getTop(SqStack* s, ElemType& e)
{
    if (s->top == -1)return false;
    e = s->data[s->top];
    return true;
}
int main()
{
    SqStack* myStack = NULL;
    initStack(myStack);
    for (int i = 1; i < 10; i++)
        push(myStack, i*i );
    while (!isEmpty(myStack))
    {
        ElemType e;
        pop(myStack, e);
        cout << e << '\t' << endl;
    }
    return 0;
}