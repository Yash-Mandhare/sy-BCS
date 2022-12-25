/*Write a program that adds two single variablepolynomials. Each polynomial should be represented as a list with linked list implementation.*/



#include<stdio.h> 
#include<stdlib.h> 
  
struct node 
{ 
 int coef; 
 int expo; 
 struct node *link; 
 }; 
 struct node *insert_sort(struct node *,int ,int); 
 void display(struct node *poly) 
 { 
 while(poly!=NULL) 
 {  
  
 if(poly->expo==0)  
 printf("%d",poly->coef); 
 else if(poly->expo==1 && poly->coef==1) 
 printf("x"); 
 else if(poly->expo==1) 
 printf("%dx",poly->coef); 
 else if(poly->coef==1) 
 printf("x^%d",poly->expo); 
  
  
 else printf("%dx^%d",poly->coef,poly->expo); 
 poly=poly->link; 
 if(poly!=NULL && poly->coef>=0) 
 { 
 printf("+"); 
 } 
  
 } 
  
 } 
  
 struct node *polynomial_multiplication(struct node *poly1,struct node *poly2) 
 { 
 struct node *poly3,*p2; 
 poly3=(struct node *)malloc(sizeof(struct node)); 
  
 while(poly1!=NULL) 
 { 
 for(p2=poly2;p2!=NULL;p2=p2->link) 
 { 
 poly3=insert_sort(poly3,(poly1->coef)*(p2->coef),poly1->expo+p2->expo); 
 } 
 poly1=poly1->link; 
 } 
 return poly3; 
 } 
 struct node *insert_sort(struct node *start,int coef,int expo) 
 { 
 struct node *temp,*p; 
 temp=(struct node *)malloc(sizeof(struct node )); 
 temp->coef=coef; 
 temp->expo=expo; 
  
 if(start==NULL || expo>=start->expo) 
 { 
 if(start!=NULL && expo==start->expo) 
 { 
 // so here exponent of first term and exponent of other term which we are going to add in polynomial if they are equal we will just add their coefficient it just like 4x^+3x^2=7x^2.( exponent are equal so we are doing addition of coefficients) 
  
 start->coef=start->coef+coef; 
 return start; 
 } 
 // else we are adding new term at first place if its exponent is greater than exponent of all ready present first as we have to store polynomial in decreasing order... 
 temp->link=start; 
 start=temp; 
 return start; 
 } 
 else 
 { 
 p=start; 
  
 while(p->link!=NULL && p->link->expo>=expo) 
 p=p->link; 
  
 if(p->expo==expo) 
 { 
 p->coef=coef+p->coef; 
 return start; 
 }  
  
 temp->link=p->link; 
 p->link=temp; 
 return start; 
 } 
 } 
 struct node * create() 
 { 
 struct node *poly=NULL; 
 int ino; 
 int expo; 
 int coef; 
 printf("\nHow many terms Do you have to insert in polynomial \n"); 
 scanf("%d",&ino); 
  
 for(int i=1;i<=ino;i++) 
 { 
 printf("\nEnter Coefficient And Exponent for term\n\n"); 
 scanf("%d%d",&coef,&expo); 
 poly=insert_sort(poly,coef,expo); 
 display(poly);// we are displaying polynomial by adding each term but it is not necessary , it is just for more understanding.. 
 } 
 return poly; // returning created polynomial..!! 
 } 
  
 int main() 
 { 
 struct node *poly1,*poly2,*poly3; 
  
 poly1=create(); 
 printf("\n NOW WE WILL ACCEPT 2ND POLYNOMIAL \n"); 
 poly2=create(); 
  
  
 poly3=polynomial_multiplication(poly1,poly2); 
 printf("\n\n Multiplication of two polynomial is \n\n"); 
 display(poly3); 
 return 0; 
} 