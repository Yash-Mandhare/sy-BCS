/*Write a program that copies the contents of one stack into another. Use
stack library to perform basic stack operations. The order of two stacks
must be identical.(Hint: Use a temporary stack to preserve the order).*/

typedef struct stack
{
    int data[200];
    int top;
} stack;
void push(stack *ps,int num)
{
    ps->data[++ps->top]=num;
}
int pop(stack *ps)
{
    int num;
    num=ps->data[ps->top--];
    return num;
}
int isempty(stack *ps)
{
    if(ps->top==-1)
        return 1;
    return 0;
}
int isfull(stack *ps)
{
    if(ps->top==20-1)
        return 1;
    return 0;
}
int peek(stack *ps)
{
return ps->data[ps->top];
}
int init(stack *ps)
{
    ps->top=-1;
}