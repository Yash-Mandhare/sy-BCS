/*Implement a list library (singlylist.h) for a singly linked list of integer
with the operations create, display. Write a menu driven program to call
these operations*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "slip21-singlylist.h"
int main() {
  int option = 0;

  printf("Singly Linked List Example - All Operations\n");

  while (option < 5)
{
    printf("\nOptions\n");
    printf("1 : Insert into Linked List \n");
    printf("2 : Delete from Linked List \n");
    printf("3 : Display Linked List\n");
    printf("4 : Count Linked List\n");
    printf("Others : Exit()\n");
    printf("Enter your option:");
    scanf("%d", &option);
    switch (option)
{
      case 1:
        insert();
        break;
      case 2:
        delete();
        break;
      case 3:
        display();
        break;
      case 4:
        count();
        break;
      default:
        break;
    }
  }
  return 0;
}
