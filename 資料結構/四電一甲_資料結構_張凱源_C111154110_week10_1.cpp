#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#define MAX_SIZE 100 

int stack[MAX_SIZE];
char postfix[MAX_SIZE];
int top = -1;

void push(int item) {
	if(top >= MAX_SIZE -1)
		printf("stack full");
	else	
		stack[++top] = item;
}


int pop() {
 	if(top == -1)
		return 0;
	return stack[ top-- ];
}

int priority(char op) {
	switch (op){
		case '(' :
			return 0;
			break;
		case '+' :
			return 1;
			break;
		case '-' :
			return 1;
			break;
		case '*' :
			return 2;
			break;
		case '/' :
			return 2;
			break;
	
	}
}

void convertToPostfix(char *infix, char *postfix) {
    int i = 0 ,j = 0;
    char token;
    top = -1;
    push('\0');
	while((token = infix[i++]) !='\0'){
		if (isdigit(token)){
			postfix[j++] = token;
		}
		else {
			if (token == '('){
				push(token);
			}
				
			else if(token == ')'){
				while(stack[top] != '('){
					postfix[j++] = pop();
				}
				pop();
			}
			else{
				while(priority(stack[top]) >= priority(token)){
					postfix[j++] = pop();
				}
				push(token);
			}
			
		}
		
	}
	while((token = pop()) != 0 ){
		postfix[j++] = token;
	}
	postfix[j] = '\0';
	
}

int evaluatePostfix(char *postfix) {
    char token;
	int op2, op1, n = 0;
	top = -1;

	while((token = postfix[n++]) != 0){
		if(isdigit(token)){
			push(token-'0');
		}
		else{
			op2 = pop();
			op1 = pop();
			switch(token){
				case '+': push(op1+op2);
					break;
				case '-': push(op1-op2);
					break;
				case '*': push(op1*op2);
					break;
				case '/': push(op1/op2);
					break;	
				}
			}			
	}
	return pop();
}

int main() {
    char infix[MAX_SIZE];
    printf("Enter the infix expression: ");
    scanf("%s", infix);

    convertToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}

