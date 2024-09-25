#include <stdio.h>

int MAXSIZE = 8; // meaning the stack can hold up to 8 elements
int stack[8]; // stack[MAXSIZE] creates an array to hold the stack elements
int top = -1; // top is initialized to -1 to represent an empty stack. It will be updated as elements are pushed and popped

/* Check if the stack is empty */
int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE - 1)
      return 1;
   else
      return 0;
}

/* Function to return the topmost element in the stack */
int peek(){
   if(!isempty())
      return stack[top];
   else {
      printf("Stack is empty.\n");
      return -1;
   }
}

/* Function to delete from the stack */
int pop(){
   int data;
   if(!isempty()) {                               //if(!isfull()) {:

                                                //This is an if statement that checks if the stack is not full.
                                                //The function isfull() returns a boolean value (either true or false), and the ! (logical NOT operator) negates that value.
                                                //So, !isfull() will be true if the stack is not full and false if it is full.
                                                //If the stack is not full, the code inside the braces { ... } will be executed

      data = stack[top]; //After this line, data will hold the value 30, and you can now use this value in further operations
      top = top - 1; //top = top - 1;, the top moves down
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
      return -1;
   }
}

/* Function to insert into the stack */
int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
      return 1; // push successful
   } else {
      printf("Could not insert data, Stack is full.\n");
      return 0; // push failed
   }
}

/* Main function */
int main(){
   push(44);
   push(10);
   push(62);
   push(123);
   push(15);
   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   return 0;
}
