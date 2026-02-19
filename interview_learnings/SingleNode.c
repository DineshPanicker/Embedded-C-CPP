#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
} Node;

int main()
{

  Node *node1 = malloc(sizeof(Node));
  if (node1 == NULL) // null ptr check
    printf("Illegal operation. Abort!\n");

  node1->data = 43;
  node1->next = NULL;

  printf("Node value is : %d\n", node1->data);

  free(node1);
  return 0;
}
