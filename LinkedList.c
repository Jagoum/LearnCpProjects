#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = 12;

    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    node1->data = 14;
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));

    node2->data = 4;

    /*
        * This prints the nodes indiviaully without pointing to any thing;

    */
    printf("Node  = %d\n", node->data);
    printf("Node  = %d\n", node2->data);
    printf("Node  = %d\n", node1->data);
    node->next = node1;
    node1->next = node2;
    node2->next = NULL;
    struct Node *temp = node;
    printf("The linked list is: ");
    while(temp != NULL)
    {
            printf("%d -> ",temp->data);
            temp = temp->next;
    }

    free(node);
    free(node1);
    free(node2);

    // free(Node);
}