#include <stdio.h>
#include <ctype.h>
char stack[50];
int top = -1;

void push(char ch)
{
  stack[++top]=ch;
}
char pop()
{
  return(stack[top--]);
}

int prioritity(char ch)
{
  switch (ch) {
    case '#': return 0;
    case '(':return 1;
    case '+':
    case '-':return 2;
    case '*':
    case '/':return 3;
    case '^':return 4;
  }
}
void main()
{
    char infix[50],postfix[50],ch;
    int i=0,j=0;
    printf("\nEnter the infix expression Below:\n" );
    scanf("%s",infix);

    push('#');

    while ((ch=infix[i++])!='\0') {
      if(ch =='(')
      {

        push(ch);
      }
      else if (isalnum(ch)) {
        postfix[j++]=ch;
      }
      else if (ch == ')') {
        while(stack[top]!='('){
          postfix[j++] = pop();
        }
        pop();//Popping the '(' i.e is the last remaining bracket from the stack! :)
      }
      else
      {
        while(prioritity(stack[top])>prioritity(ch))
        {
          postfix[j++]=pop();

        }push(ch);//Pushing the remaining operators of lesser prioritity into the stack! :)

      }
    }
    while (stack[top]!='#') {
      postfix[j++]=pop();//Adding the he remaining operators of lesser prioritity into the postfix expression! :)
    }
    postfix[j]='\0';
    printf("\nRequired postfix is : %s",postfix );
}
