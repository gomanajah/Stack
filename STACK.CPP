#include<stdio.h>
#include<conio.h>
void push(int x);
void pop(int x);
void orderdown(int x);
void orderup(int x);
void print(int x);
void create();
int full();
int empty();
int s[10],top=-1,top1=0,x,i,j;
void main(){
int s;
clrscr();
do{
printf("\n\n1: Push to the stack\n2: Pop from the stack\n3: Print the stack\n4: Order stack down\n5: Order stack up\n6: create the stack\n7: Exit");
printf("\nEnter your choise \t\n");
scanf("%d",&s);
switch(s){
 case 1:clrscr();push(x);
	break;
 case 2:clrscr();pop(x);
	break;
 case 3:clrscr();print(x);
	 break;
 case 4:clrscr();orderdown(x);
	 break;
 case 5:clrscr();orderup(x);
	 break;
 case 6:clrscr();create();
	break;
 default:clrscr();printf("\n\t\t\t data out");
}
}while(s!=7);
}

int full(){
if(top==9)
	return 1;
else
	return 0;
	}

void push(int x){
if(full())	{
		printf("\n\t\t\tSTOP! stack is full");
	}
else	{
		printf("\tx[%d]=",top1=top+1);
		scanf("%d",&x);
		s[++top]=x;
	}
	}

int empty(){
if(top==-1)
	return 1;
else
	return 0;
}

void pop(int x)
{
	if(empty()){
		printf("\n\t\t\tSTOP! stack is empty");
	}
else 	{
	x=s[top--];
	printf("\n\t\t\tx[%d]=%d deleted",top,x);
	}
}

void orderdown(int){
if(empty()){
printf("\n\t\t\tSTOP! stack is empty");
}
else {
int temp;
for(i=0;i<=top;i++){
for(j=i+1;j<=top;j++)
if(s[i]<s[j]){
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("\n%d",s[i]);
}
}}

void orderup(int){
if(empty()){
printf("\n\t\t\tSTOP! stack is empty");
}
else {
int temp;
for(i=0;i<=top;i++){
for(j=i+1;j<=top;j++)
if(s[i]>s[j]){
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
printf("\n%d",s[i]);
}
}
}
void print(int){
if(empty()){
printf("\n\t\t\tSTOP! stack is empty");
}
else {
for(i=0;i<=top;i++){
printf("\nx[%d]=%d",i,s[i]);
}
}
}
void create (){
top=-1;
}