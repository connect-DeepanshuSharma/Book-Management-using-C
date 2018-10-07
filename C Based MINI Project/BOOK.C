#include<stdio.h>
#include<conio.h>
char date[20],uname[20],bname[20],mno[20];
long int cost;
void write();
void display();



void main(){
char ch;
char lm[20];
do{
clrscr();
printf("\t***** WELCOME TO THE BOOK MANAGEMENT SYSTEM ****\n");
printf("\n Press 1 To Create Entry Of Book ");
printf("\n Press 2 To Display Books issued on Specific Date");
printf("\n Press 0 To Exit");
printf("\n Enter Your Choice : ");
scanf("%d",&ch);
switch(ch)
{
  case 1: write();
	break;
  case 2: printf("\nEnter Date : ");
	  scanf("%s",&lm);
	  display(lm);
	  break;
  case 0: exit();
  default: printf("\nINVALID SELECTION") ;



}
getch();
}while(ch!=0);

}




void write(){
FILE *fp;
char dat[20],uname[20],bname[20],mn[15];
long int cos;

printf("\nEnter Date    :  ");
scanf("%s",&dat);
printf("\nEnter name of Customer :  ");
scanf("%s",&uname);
printf("\nEnter name of book : ");
scanf("%s",&bname);
printf("\nEnter mobile of customer : ");
scanf("%s",&mn);
printf("\nEnter cost of the book : ");
scanf("%ld",cos);

fp=fopen("record.txt","a");

fprintf(fp, "\n%s %s %s %s %ld\n",dat,uname,bname,mn,cos);
printf("\n**** Record Entered Successfully ***** \n");
fclose(fp);
}





void display(char lm[]){
{
FILE *fp;
int res;
fp=fopen("record.txt","r");
while(fscanf(fp,"%s %s %s %s %ld \n",date,uname,bname,mno,&cost)!=EOF)
{res=strcmp(date,lm);
if(res==0){
printf("\n\n Customer Name = %s", uname);
printf("\n Mobile No. = %s ",mno);
printf("\n Book Name = %s ",bname);
printf("\n Book Cost = %ld", cost);
}}
fclose(fp);
}}

