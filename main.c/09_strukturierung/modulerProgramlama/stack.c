#include "stack.h"
#define N 26

static int buffer[N];
static int top = 0; 

int empty()
{
    return top == 0;
}

int full()
{
    return top == N;
}

int pop() //
{
    if (!empty())
    {
        return (buffer[--top]);
    }
    return -1;
}

int push(int ch)
{
    if (full())
    {
        return -1;
    }

    buffer[top++] = ch;
    return 0;
}

/*static char stack[N];
static int top = 0;

void push(char c)
{
    if (!full())
    {
        stack[top++] = c;
    }
}

char pop()
{
    return stack[--top];
}

int full()
{
    return top >= N;
}

int empty()
{
    return top == 0;
}*/