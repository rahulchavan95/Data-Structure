#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 20

struct stack
{
    int top;
    char arr[max];
}st;

void init()
{
    st.top=-1;
}

bool isempty()
{
    if(st.top==-1)
        return true;
    
    else
    {
        return false;
    }
    
}

bool isfull()
{
    if(st.top==max-1)
        return true;
    else
        return false;
}

void push(char item)
{
    if(isfull())
        printf("stack full\n");
    else
        st.top++;
        st.arr[st.top]=item;

}

char pop()
{
    if(isempty())
        printf("stack is empty\n");
    else
        st.top--;

}

char gettop()
{
    return st.arr[st.top];
}
/* 
bool arepair(char opening,char closing)
{
    if(opening=='(' && closing==')')
        return true;
    else if(opening=='{' && closing=='}')
        return true;
    else if(opening=='[' && closing==']')
        return true;
    return false;    
} */


int main()
{
    char expr[max];

    int length=0,i,j;
    char a;
    init();

    printf("enter expression\n");
    scanf("%s",expr);
    //printf("%s",expr);
    length=strlen(expr);
    //printf("%d ",length);

    

    for(i=0;i<length;i++)
    {
      
        //printf("top=%c",st.arr[st.top-1]);
        if(expr[i]=='(' || expr[i]=='{' || expr[i]=='[')    
            push(expr[i]);

        
        else if(expr[i]==')' || expr[i]=='}' || expr[i]==']')
            a=pop();
            //printf("%c ",a);
        
    }
    if(isempty())
            printf("balanced\n");
        else    
            printf("unbalanced\n");
}



/*      a=gettop();
            printf("%c \n",a);
            if(isempty() || !arepair(gettop(),expr[i]))
            {
                printf("unbalanced\n");
                return 0;
            }
            else
            {
                pop();
            }
        if(isempty())
        {
        printf("\nResult - Valid expression - Perfectly Balanced !");
        }
        else
        {
            printf("unbalanced\n");
        } */