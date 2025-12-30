1.INITIALIZATION OF MALLOC() FUNCTION INTO ZERO.

#include<stdio.h> #include<stdlib.h> int main ()
{ int n=5, *a; a=(int*) malloc(n*sizeof(int));
int i;
for(i=0;i<n;i++)
{ a[i]=0
;
printf("%d",a[i]);
} printf("program output:success\n");
system("getmac"); return 0;
}

OUTPUT:


2.	PRINTING THE ADDRESS OF THE POINTER.

#include <stdio.h>
#include <stdlib.h>

int main() {     int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);     printf("Address of a = %p\n", (void*)&a);
    printf("Value of pointer p (address of a) = %p\n", (void*)p);     printf("Address of pointer p = %p\n", (void*)&p);

    // Display MAC address (Windows)     printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


3.	SELECTION SORT WITH DYNAMIC MEMORY ALLOCATION.

#include <stdio.h>
#include <stdlib.h>

int main() {     int n, i, j, min, temp;
    int *a;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed\n");         return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort     for (i = 0; i < n - 1; i++) {         min = i;
        for (j = i + 1; j < n; j++) {             if (a[j] < a[min]) {
                min = j;
            }
        }
        // Swap         temp = a[i];         a[i] = a[min];
        a[min] = temp;
    }     printf("Sorted array:\n");
    for (i = 0; i < n; i++) {         printf("%d ", a[i]);
    }

    // Free allocated memory
    free(a);

// Display MAC address (Windows)     printf("\nMAC Address:\n");     system("getmac");

return 0;
}

OUTPUT:


4. SELECTION SORT WITHOUT DYNAMIC MEMORY ALLOCATION.
#include <stdio.h> int main() {     int n, i, j, min, temp;     int a[100];

    printf("Enter number of elements: ");     scanf("%d", &n);

    printf("Enter elements:\n");     for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {         min = i;
        for (j = i + 1; j < n; j++) {             if (a[j] < a[min])                 min = j;
        }         temp = a[i];         a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array:\n");     for (i = 0; i < n; i++)
        printf("%d ", a[i]);

// Display MAC address (Windows)     printf("\nMAC Address:\n");     system("getmac");


    return 0;
}

OUTPUT:


5. DECLARATION OF TWO DIMENSIONAL ARRAY USING DYNAMIC MEMORY ALLOCATION.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;
    int **a;

    printf("Enter number of rows: ");     scanf("%d", &r);

    printf("Enter number of columns: ");     scanf("%d", &c);

    // Allocate memory for rows
    a = (int **)malloc(r * sizeof(int *));

    // Allocate memory for columns
    for (i = 0; i < r; i++) {
        a[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter elements:\n");     for (i = 0; i < r; i++) {         for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("2D Array elements:\n");     for (i = 0; i < r; i++) {         for (j = 0; j < c; j++) {             printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory     for (i = 0; i < r; i++) {
        free(a[i]);
    }
    free(a);
    // Display MAC address (Windows)     printf("\nMAC Address:\n");     system("getmac");

return 0;
}

OUTPUT:


6. PATTERN MATCHING (GENERAL WAY).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char text[100], pattern[50];
    int i, j, n, m, found = 0;

    printf("Enter the text: ");
    scanf("%s", text);

    printf("Enter the pattern: ");
    scanf("%s", pattern);

    n = strlen(text);
    m = strlen(pattern);

    // Pattern matching logic (general/naive way)
    for (i = 0; i <= n - m; i++) {         for (j = 0; j < m; j++) {             if (text[i + j] != pattern[j])
                break;
        }         if (j == m) {
            printf("Pattern found at position %d\n", i + 1);             found = 1;
        }
    }

    if (!found) {
        printf("Pattern not found\n");
    }

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


7. SELF REFERENTIAL STRUCTURE.

#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for a simple linked list node struct Node {     int data;
    struct Node *next; // Pointer to same structure type
};

int main() {     // Creating nodes     struct Node *head = NULL;     struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocating memory
    head = (struct Node*) malloc(sizeof(struct Node));     second = (struct Node*) malloc(sizeof(struct Node));     third = (struct Node*) malloc(sizeof(struct Node));

    // Assigning data     head->data = 10;     head->next = second; second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Printing linked list     struct Node *ptr = head;     printf("Linked List elements:\n");     while (ptr != NULL) {         printf("%d -> ", ptr->data);         ptr = ptr->next;
    }
    printf("NULL\n");

    // Free memory     free(head);     free(second);
    free(third);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");



return 0;
}

OUTPUT:


8.	PRE INCREMENT AND POST INCREMENT.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5, b;

    // Pre-increment     b = ++a;
    printf("Pre-increment: a = %d, b = %d\n", a, b);

    // Reset a
a	= 5;

    // Post-increment     b = a++;
    printf("Post-increment: a = %d, b = %d\n", a, b);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


9.	PRE DECREMENT AND POST DECREMENT.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5, b;

    // Pre-decrement
    b = --a;
    printf("Pre-decrement: a = %d, b = %d\n", a, b);

    // Reset a
a	= 5;

    // Post-decrement
b	= a--;
    printf("Post-decrement: a = %d, b = %d\n", a, b);

// Display MAC Address (Windows only)     printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


10.	REGULAR QUEUE.
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Enqueue function void enqueue(int item) {     if (rear == MAX - 1) {         printf("Queue Overflow\n");         return;
    }
    if (front == -1) front = 0;     rear++;
    queue[rear] = item;
}

// Dequeue function int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");         return -1;
    }
    int item = queue[front];     front++;     return item;
}

// Display function void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");     for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {     enqueue(10);     enqueue(20);     enqueue(30);
    display();

    printf("Dequeued element: %d\n", dequeue());     display();

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


11. OPERATIONS OF LINKED LISTS (TRAVERSAL, INSERTION, DELETION).

#include <stdio.h>
#include <stdlib.h> // Node structure struct Node {
    int data;     struct Node* next;
};

// Traversal void traverse(struct Node* head) {     struct Node* temp = head;     printf("Linked List: ");     while (temp != NULL) {         printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insertion at beginning
struct Node* insertBeginning(struct Node* head, int data) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;     newNode->next = head;     return newNode;
}

// Insertion at end
struct Node* insertEnd(struct Node* head, int data) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) return newNode;

    struct Node* temp = head;     while (temp->next != NULL) temp = temp->next;     temp->next = newNode;
    return head;
}

// Deletion of a node by value
struct Node* deleteNode(struct Node* head, int key) {     struct Node* temp = head;
    struct Node* prev = NULL;

    // If head node is to be deleted     if (temp != NULL && temp->data == key) {
        head = temp->next;         free(temp);         return head;
    }

    // Search for the node to delete
    while (temp != NULL && temp->data != key) {         prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return head; // Key not found

    prev->next = temp->next;     free(temp);

    return head; }
    int main() {     struct Node* head = NULL;

    // Insertion     head = insertEnd(head, 10);     head = insertEnd(head, 20);     head = insertEnd(head, 30);
    head = insertBeginning(head, 5);

    // Traversal     printf("After Insertion:\n");
    traverse(head);

    // Deletion     head = deleteNode(head, 20);     printf("After Deletion of 20:\n");     traverse(head);

    // Display MAC Address (Windows only)     printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:

12. LINKED LIST USING STACKS.

#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list stack
struct Node {     int data;     struct Node* next;
};

// Push operation
struct Node* push(struct Node* top, int data) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;     newNode->next = top;     return newNode;
}

// Pop operation
struct Node* pop(struct Node** top) {     if (*top == NULL) {         printf("Stack Underflow\n");         return NULL;
    }
    struct Node* temp = *top;     *top = (*top)->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);     return *top;
}

// Display stack void display(struct Node* top) {     struct Node* temp = top;     printf("Stack elements: ");     while (temp != NULL) {         printf("%d ", temp->data);
        temp = temp->next;
    }     printf("\n");
}

int main() {     struct Node* stackTop = NULL;

    // Push elements     stackTop = push(stackTop, 10);     stackTop = push(stackTop, 20);     stackTop = push(stackTop, 30);     display(stackTop);

    // Pop element
    stackTop = pop(&stackTop);
    display(stackTop);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


13. LINKED LIST USING QUEUES.
#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;
    struct Node* next;
};

// Enqueue at end struct Node* enqueue(struct Node* rear, int data, struct Node** front) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;
    newNode->next = NULL;

    if (*front == NULL) {  // empty queue
        *front = newNode;         rear = newNode;
    } else {
        rear->next = newNode;         rear = newNode;
}     return rear;
}

// Dequeue from front struct Node* dequeue(struct Node** front) {     if (*front == NULL) {         printf("Queue Underflow\n");         return NULL;
    }
    struct Node* temp = *front;     *front = (*front)->next;     printf("Dequeued element: %d\n", temp->data);
    free(temp);     return *front;
}

// Display queue void display(struct Node* front) {     struct Node* temp = front;     printf("Queue elements: ");     while (temp != NULL) {         printf("%d ", temp->data);
        temp = temp->next;
    }     printf("\n");
}

int main() {     struct Node* front = NULL;
    struct Node* rear = NULL;

    // Enqueue elements     rear = enqueue(rear, 10, &front);     rear = enqueue(rear, 20, &front);     rear = enqueue(rear, 30, &front);

    display(front);

    // Dequeue element     front = dequeue(&front);
    display(front);

    // Display MAC Address (Windows only)     printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:


14. TIME TAKEN FOR ARRAYS AND LINKED LISTS DURING INSERTION AND DELETION.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Node structure for linked list
struct Node {     int data;
    struct Node* next;
};

// Insert at end in linked list
struct Node* insertEnd(struct Node* head, int data) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) return newNode;

    struct Node* temp = head;     while (temp->next != NULL) temp = temp->next;     temp->next = newNode;
    return head;
}

// Delete last node from linked list struct Node* deleteEnd(struct Node* head) {     if (head == NULL) return NULL;
    if (head->next == NULL) {         free(head);
        return NULL;
    }
struct Node* temp = head;
    while (temp->next->next != NULL) temp = temp->next;     free(temp->next);     temp->next = NULL;     return head;
}

int main() {     int n = 10000; // number of elements     int *arr = (int*) malloc(n * sizeof(int));
    struct Node* head = NULL;

    clock_t start, end;
    double time_array, time_linked;

    // ----------- Array Insertion -----------     start = clock();     for (int i = 0; i < n; i++) arr[i] = i;
    end = clock();     time_array = ((double)(end - start)) / CLOCKS_PER_SEC;

    // ----------- Linked List Insertion -----------     start = clock();     for (int i = 0; i < n; i++) head = insertEnd(head, i);     end = clock();     time_linked = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken for insertion:\n");     printf("Array: %f seconds\n", time_array);
    printf("Linked List: %f seconds\n", time_linked);

    // ----------- Array Deletion (delete last element repeatedly) -----------     start = clock();     for (int i = n-1; i >= 0; i--) arr[i] = 0;
    end = clock();     time_array = ((double)(end - start)) / CLOCKS_PER_SEC;

    // ----------- Linked List Deletion -----------     start = clock();     for (int i = 0; i < n; i++) head = deleteEnd(head);     end = clock();     time_linked = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nTime taken for deletion:\n");     printf("Array: %f seconds\n", time_array);
    printf("Linked List: %f seconds\n", time_linked);

    free(arr);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


15. SPARSE MATRIX REPRESENTATION.

#include <stdio.h>
#include <stdlib.h>

int main() {     int rows, cols, i, j, k = 0;

    printf("Enter number of rows and columns: ");     scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++) {         for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Count non-zero elements     int nonZero = 0;     for (i = 0; i < rows; i++)         for (j = 0; j < cols; j++)             if (matrix[i][j] != 0)
                nonZero++;

    // Create sparse matrix representation     int sparse[nonZero][3]; // row, column, value for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {             if (matrix[i][j] != 0) {                 sparse[k][0] = i;                 sparse[k][1] = j;                 sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    // Display sparse matrix
    printf("\nSparse Matrix Representation (row, column, value):\n");     for (i = 0; i < nonZero; i++) {         printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


16. POLYNOMIAL REPRESENTATION.

#include <stdio.h>
#include <stdlib.h>

// Node structure for polynomial term struct Term {     int coeff;     int exp;     struct Term* next;
};

// Create a new term
struct Term* createTerm(int coeff, int exp) {     struct Term* newTerm = (struct Term*) malloc(sizeof(struct Term));     newTerm->coeff = coeff;     newTerm->exp = exp;     newTerm->next = NULL;     return newTerm;
}

// Insert term at end
struct Term* insertTerm(struct Term* head, int coeff, int exp) {     struct Term* newTerm = createTerm(coeff, exp);     if (head == NULL) return newTerm;

    struct Term* temp = head;     while (temp->next != NULL) temp = temp->next;     temp->next = newTerm;
    return head;
}

// Display polynomial
void displayPolynomial(struct Term* head) {     struct Term* temp = head;     while (temp != NULL) {         printf("%dx^%d", temp->coeff, temp->exp);         if (temp->next != NULL) printf(" + ");         temp = temp->next;
    }     printf("\n");
}

int main() {     struct Term* poly = NULL;     int n, coeff, exp;

    printf("Enter number of terms: ");     scanf("%d", &n);

    for (int i = 0; i < n; i++) {         printf("Enter coefficient and exponent for term %d: ", i+1);         scanf("%d %d", &coeff, &exp);
        poly = insertTerm(poly, coeff, exp);
    }

    printf("\nPolynomial: ");
    displayPolynomial(poly);

    // Display MAC Address (Windows only)
printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:


17. HOW TO CREATE TREE.

#include <stdio.h>
#include <stdlib.h>

// Node structure for binary tree struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Preorder traversal to check tree void preorder(struct Node* root) {     if (root != NULL) {         printf("%d ", root->data);         preorder(root->left);
        preorder(root->right);
    }
}

int main() {
// Creating nodes manually     struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Preorder Traversal of Tree: ");     preorder(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


18. USING ARRAY WE CAN CONSTRUCT A TREE.

#include <stdio.h>
#include <stdlib.h>
// Node structure for binary tree struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;
    node->left = node->right = NULL;
return node;
}

// Function to build tree from array struct Node* buildTree(int arr[], int i, int n) {     if (i >= n) return NULL;     struct Node* root = createNode(arr[i]);     root->left = buildTree(arr, 2*i + 1, n);     root->right = buildTree(arr, 2*i + 2, n);
    return root; }
// Preorder traversal void preorder(struct Node* root) {     if (root != NULL) {         printf("%d ", root->data);         preorder(root->left);
        preorder(root->right);
    }
} int main() {     int n;     printf("Enter number of nodes: ");
    scanf("%d", &n);     int arr[n];     printf("Enter elements of tree:\n");     for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct Node* root = buildTree(arr, 0, n);     printf("Preorder Traversal of Tree: ");     preorder(root);
    printf("\n");
     // Display MAC Address (Windows only)     printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:

19. CONSTRUCT A BINARY TREE USING QUEUES.

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Node structure for binary tree struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Queue structure for nodes struct Queue {     struct Node* items[MAX];
    int front;     int rear;
};

// Initialize queue
void initQueue(struct Queue* q) {
    q->front = -1;     q->rear = -1;
}

// Check if queue is empty int isEmpty(struct Queue* q) {     return q->front == -1;
}

// Enqueue
void enqueue(struct Queue* q, struct Node* node) {
    if (q->rear == MAX - 1) return;     if (isEmpty(q)) q->front = 0;     q->rear++;     q->items[q->rear] = node;
}

// Dequeue struct Node* dequeue(struct Queue* q) {     if (isEmpty(q)) return NULL;     struct Node* temp = q->items[q->front];
    if (q->front == q->rear) {         q->front = q->rear = -1;
    } else {         q->front++;
    }     return temp;
}

// Create a new node struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Level Order Traversal void levelOrder(struct Node* root) {
    struct Queue q;
    initQueue(&q);

    if (!root) return;
    enqueue(&q, root);

    while (!isEmpty(&q)) {         struct Node* curr = dequeue(&q);
        printf("%d ", curr->data);

        if (curr->left) enqueue(&q, curr->left);
        if (curr->right) enqueue(&q, curr->right);
    }
}

int main() {     struct Node* root = createNode(1);
    struct Queue q;
    initQueue(&q);

    // Construct tree manually using queue     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Level Order Traversal of Binary Tree: ");     levelOrder(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}


OUTPUT:
20. INSERTION OF NODES.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Simple queue for level order insertion struct Queue {     struct Node* arr[100];
    int front;     int rear;
};

// Initialize queue void initQueue(struct Queue* q) {
    q->front = -1;     q->rear = -1;
}

// Check if queue is empty int isEmpty(struct Queue* q) {     return q->front == -1;
}

// Enqueue
void enqueue(struct Queue* q, struct Node* node) {
    if (q->rear == 99) return;     if (isEmpty(q)) q->front = 0;     q->arr[++q->rear] = node;
}

// Dequeue struct Node* dequeue(struct Queue* q) {     if (isEmpty(q)) return NULL;     struct Node* temp = q->arr[q->front];     if (q->front == q->rear) {         q->front = q->rear = -1;
    } else {         q->front++;
    }     return temp;
}

// Insert node in binary tree (level order) struct Node* insertNode(struct Node* root, int data) {     struct Node* newNode = createNode(data);
    if (!root) return newNode;     struct Queue q;     initQueue(&q);     enqueue(&q, root);  while (!isEmpty(&q)) {         struct Node* temp = dequeue(&q);

        if (!temp->left) {             temp->left = newNode;             return root;         } else {
            enqueue(&q, temp->left);
        }

        if (!temp->right) {             temp->right = newNode;             return root;         } else {
            enqueue(&q, temp->right);
        }     }     return root;
}

// Level order traversal void levelOrder(struct Node* root) {     if (!root) return;

    struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {         struct Node* temp = dequeue(&q);
        printf("%d ", temp->data);

        if (temp->left) enqueue(&q, temp->left);
        if (temp->right) enqueue(&q, temp->right);
    }
} int main() {     struct Node* root = NULL;
    int n, data;     printf("Enter number of nodes to insert: ");     scanf("%d", &n);

    for (int i = 0; i < n; i++) {         printf("Enter node %d: ", i+1);         scanf("%d", &data);
        root = insertNode(root, data);
    }
     printf("Level Order Traversal after Insertions: ");     levelOrder(root);
    printf("\n");

    // Display MAC Address (Windows only)     printf("\nMAC Address:\n");     system("getmac");    return 0;
}

OUTPUT:

21. DELETION OF NODES.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Queue for level order traversal struct Queue {     struct Node* arr[100];     int front, rear;
};

// Initialize queue void initQueue(struct Queue* q) {
    q->front = -1;     q->rear = -1;
}

int isEmpty(struct Queue* q) {     return q->front == -1;
}

void enqueue(struct Queue* q, struct Node* node) {     if (q->rear == 99) return;
    if (isEmpty(q)) q->front = 0;     q->arr[++q->rear] = node;
}

struct Node* dequeue(struct Queue* q) {     if (isEmpty(q)) return NULL;     struct Node* temp = q->arr[q->front];     if (q->front == q->rear) q->front = q->rear = -1;     else q->front++;     return temp;
}

// Level order traversal void levelOrder(struct Node* root) {     if (!root) return;     struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {         struct Node* temp = dequeue(&q);         printf("%d ", temp->data);         if (temp->left) enqueue(&q, temp->left);
        if (temp->right) enqueue(&q, temp->right);
    }
}

// Delete deepest node
void deleteDeepest(struct Node* root, struct Node* dNode) {     struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    struct Node* temp;     while (!isEmpty(&q)) {         temp = dequeue(&q);         if (temp->left) {             if (temp->left == dNode) {                 free(temp->left);
                temp->left = NULL;                 return;
            } else enqueue(&q, temp->left);
        }         if (temp->right) {             if (temp->right == dNode) {                 free(temp->right);
                temp->right = NULL;                 return;
            } else enqueue(&q, temp->right);
        }
    }
}

// Delete node by value
struct Node* deleteNode(struct Node* root, int key) {
    if (!root) return NULL;

    if (!root->left && !root->right) {         if (root->data == key) {             free(root);             return NULL;         } else return root;
    }

    struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    struct Node *temp = NULL, *keyNode = NULL;

    while (!isEmpty(&q)) {         temp = dequeue(&q);         if (temp->data == key) keyNode = temp;         if (temp->left) enqueue(&q, temp->left);
        if (temp->right) enqueue(&q, temp->right);
    }

    if (keyNode) {         int x = temp->data; // deepest node value         deleteDeepest(root, temp);
        keyNode->data = x;
    }

    return root;
}

int main() {     struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Level Order before deletion: ");     levelOrder(root);
    printf("\n");

    int key;     printf("Enter node value to delete: ");     scanf("%d", &key);
    root = deleteNode(root, key);

    printf("Level Order after deletion: ");     levelOrder(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");
 return 0;
}


OUTPUT:



22. DEPTH FIRST SEARCH (DFS) TREE.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// DFS - Preorder Traversal
void DFS(struct Node* root) {     if (!root) return;
    printf("%d ", root->data);
    DFS(root->left);
    DFS(root->right);
}

int main() {
    // Constructing tree
    struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("DFS (Preorder) Traversal: ");     DFS(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


23. BREADTH FIRST SEARCH (BFS) TREE.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};
// Create a new node struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Queue for BFS struct Queue {     struct Node* arr[100];     int front, rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;     q->rear = -1;
}

int isEmpty(struct Queue* q) {     return q->front == -1;
}

void enqueue(struct Queue* q, struct Node* node) {
    if (q->rear == 99) return;     if (isEmpty(q)) q->front = 0;     q->arr[++q->rear] = node;
}

struct Node* dequeue(struct Queue* q) {     if (isEmpty(q)) return NULL;     struct Node* temp = q->arr[q->front];     if (q->front == q->rear) q->front = q->rear = -1;     else q->front++;     return temp;
}

// BFS / Level Order Traversal
void BFS(struct Node* root) {     if (!root) return;

    struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {         struct Node* temp = dequeue(&q);         printf("%d ", temp->data);
        if (temp->left) enqueue(&q, temp->left);
        if (temp->right) enqueue(&q, temp->right);
    }
}

int main() {
    // Constructing tree
    struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("BFS / Level Order Traversal: ");     BFS(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


24. LEVEL ORDER.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};
// Create a new node struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Queue for level order traversal struct Queue {     struct Node* arr[100];     int front, rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;     q->rear = -1;
}

int isEmpty(struct Queue* q) {     return q->front == -1;
}

void enqueue(struct Queue* q, struct Node* node) {
    if (q->rear == 99) return;     if (isEmpty(q)) q->front = 0;     q->arr[++q->rear] = node;
}

struct Node* dequeue(struct Queue* q) {     if (isEmpty(q)) return NULL;     struct Node* temp = q->arr[q->front];     if (q->front == q->rear) q->front = q->rear = -1;     else q->front++;     return temp;
}

// Level Order Traversal void levelOrder(struct Node* root) {     if (!root) return;

    struct Queue q;     initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {         struct Node* temp = dequeue(&q);         printf("%d ", temp->data);
        if (temp->left) enqueue(&q, temp->left);
        if (temp->right) enqueue(&q, temp->right);
    }
}

int main() {     // Construct tree
    struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Level Order Traversal: ");     levelOrder(root);
    printf("\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


25. DFS & BFS USING ADJACENCY LIST.

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack for DFS struct Stack {     int arr[MAX];     int top;
};

void initStack(struct Stack* s) { s->top = -1; } int isStackEmpty(struct Stack* s) { return s->top == -1; } void push(struct Stack* s, int val) { if (s->top < MAX-1) s->arr[++s->top] = val; } int pop(struct Stack* s) { return s->arr[s->top--]; }

// Queue for BFS struct Queue {     int arr[MAX];     int front, rear;
};

void initQueue(struct Queue* q) { q->front = q->rear = -1; } int isQueueEmpty(struct Queue* q) { return q->front == -1; } void enqueue(struct Queue* q, int val) {      if (q->rear < MAX-1) {         if (isQueueEmpty(q)) q->front = 0;         q->arr[++q->rear] = val;
    }
} int dequeue(struct Queue* q) {      int val = q->arr[q->front];     if (q->front == q->rear) q->front = q->rear = -1;     else q->front++;     return val;
}

// Graph using adjacency list struct Node {     int vertex;     struct Node* next;
};

struct Node* createNode(int v) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->vertex = v;     newNode->next = NULL;     return newNode;
}

// DFS using stack
void DFS(struct Node* adjList[], int n, int start) {     int visited[n];     for (int i=0;i<n;i++) visited[i]=0;

    struct Stack s;     initStack(&s);     push(&s, start);     printf("DFS Traversal: ");     while (!isStackEmpty(&s)) {         int curr = pop(&s);         if (!visited[curr]) {             printf("%d ", curr);             visited[curr] = 1;             struct Node* temp = adjList[curr];
            while (temp) {                 if (!visited[temp->vertex]) push(&s, temp->vertex);                 temp = temp->next;
            }
        }     }     printf("\n");
}

// BFS using queue
void BFS(struct Node* adjList[], int n, int start) {
    int visited[n];     for (int i=0;i<n;i++) visited[i]=0;

    struct Queue q;     initQueue(&q);
    enqueue(&q, start);

    printf("BFS Traversal: ");     while (!isQueueEmpty(&q)) {         int curr = dequeue(&q);         if (!visited[curr]) {             printf("%d ", curr);             visited[curr] = 1;             struct Node* temp = adjList[curr];
            while (temp) {                 if (!visited[temp->vertex]) enqueue(&q, temp->vertex);
                temp = temp->next;
            }
        }     }     printf("\n");
}

int main() {     int n, e;     printf("Enter number of vertices: ");     scanf("%d", &n);     printf("Enter number of edges: ");     scanf("%d", &e);

    struct Node* adjList[n];     for(int i=0;i<n;i++) adjList[i] = NULL;     printf("Enter edges (u v):\n");     for(int i=0;i<e;i++){         int u, v;
        scanf("%d %d", &u, &v);         struct Node* newNode = createNode(v);         newNode->next = adjList[u];
        adjList[u] = newNode;

        // For undirected graph, also add edge v->u         newNode = createNode(u);         newNode->next = adjList[v];
        adjList[v] = newNode;
    }
    int start;     printf("Enter starting vertex for traversal: ");     scanf("%d", &start);

    DFS(adjList, n, start);
    BFS(adjList, n, start);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


26. CALLOC AND MALLOC FUNCTIONS – CHECKING JUNK / ZERO INITIALIZATION.

#include <stdio.h>
#include <stdlib.h>

int main() {     int n;
    printf("Enter number of elements: ");     scanf("%d", &n);

    // Using malloc
    int* arrMalloc = (int*) malloc(n * sizeof(int));     printf("Contents of malloc array (may contain junk):\n");     for(int i = 0; i < n; i++) {
        printf("%d ", arrMalloc[i]);
    }
    printf("\n");

    // Using calloc
    int* arrCalloc = (int*) calloc(n, sizeof(int));     printf("Contents of calloc array (initialized to zero):\n");     for(int i = 0; i < n; i++) {
        printf("%d ", arrCalloc[i]);
    }
    printf("\n");

    // Free memory     free(arrMalloc);
    free(arrCalloc);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


27. CIRCULAR LINKED LIST – BASIC OPERATIONS AND IMPLEMENTATION.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* next;
};

// Insert at end
struct Node* insertEnd(struct Node* head, int data) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;

    if (!head) {         newNode->next = newNode;         return newNode;
    }

    struct Node* temp = head;     while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return head;
}

// Delete a node by value
struct Node* deleteNode(struct Node* head, int key) {     if (!head) return NULL;

    struct Node *curr = head, *prev = NULL;

    // Single node case
    if (head->data == key && head->next == head) {         free(head);
        return NULL;
    }

    // Deleting head     if (head->data == key) {         prev = head;         while (prev->next != head)             prev = prev->next;         struct Node* temp = head;         head = head->next;         prev->next = head;         free(temp);
        return head;
    }

    prev = head;     curr = head->next;     while (curr != head) {         if (curr->data == key) {             prev->next = curr->next;
            free(curr);             return head;
        }         prev = curr;
        curr = curr->next;
    }

    printf("Node with value %d not found.\n", key);
    return head;
}

// Display circular linked list
void display(struct Node* head) {     if (!head) {         printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;     do {         printf("%d ", temp->data);         temp = temp->next;     } while (temp != head);     printf("\n");
}

int main() {     struct Node* head = NULL;
    int n, val;

    printf("Enter number of nodes to insert: ");     scanf("%d", &n);     for(int i=0;i<n;i++){         printf("Enter value for node %d: ", i+1);         scanf("%d", &val);
        head = insertEnd(head, val);
    }

    printf("Circular Linked List: ");     display(head);

    printf("Enter value to delete: ");
    scanf("%d", &val);
    head = deleteNode(head, val);

    printf("After Deletion: ");     display(head);

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


28. COMPARISON OF TWO STRINGS USING BUILT-IN FUNCTION.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {     char str1[100], str2[100];

    printf("Enter first string: ");     fgets(str1, sizeof(str1), stdin);     str1[strcspn(str1, "\n")] = '\0'; // remove newline

    printf("Enter second string: ");     fgets(str2, sizeof(str2), stdin);     str2[strcspn(str2, "\n")] = '\0'; // remove newline

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal.\n");
    else if (result < 0)         printf("String 1 is less than String 2.\n");     else         printf("String 1 is greater than String 2.\n");

    // Display MAC Address (Windows only)
    printf("\nMAC Address:\n");     system("getmac");

    return 0;
}

OUTPUT:


29. INSERTION AND DELETION IN THE MIDDLE OF LINKED LIST.
#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;
    struct Node* next;
};

// Insert at a given position (middle) struct Node* insertMiddle(struct Node* head, int data, int pos) {     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));     newNode->data = data;

    if (pos == 1) { // insert at head         newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;     for (int i = 1; i < pos-1 && temp != NULL; i++)         temp = temp->next;

    if (!temp) {         printf("Position out of bounds.\n");         free(newNode);         return head;
    }

    newNode->next = temp->next;     temp->next = newNode;     return head;
}

// Delete at a given position (middle) struct Node* deleteMiddle(struct Node* head, int pos) {     if (!head) return NULL;

    struct Node* temp = head;

    if (pos == 1) { // delete head         head = head->next;         free(temp);         return head;
    }

    struct Node* prev = NULL;     for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (!temp) {         printf("Position out of bounds.\n");
        return head;
    }

    prev->next = temp->next;     free(temp);     return head;
}

// Display linked list void display(struct Node* head) {     struct Node* temp = head;     while (temp) {         printf("%d ", temp->data);
        temp = temp->next;
    }     printf("\n");
}

int main() {     struct Node* head = NULL;     int n, data, pos;

    printf("Enter number of nodes to insert initially: ");     scanf("%d", &n);     for (int i = 0; i < n; i++) {         printf("Enter value for node %d: ", i+1);         scanf("%d", &data);         head = insertMiddle(head, data, i+1); // insert at end initially
    }

    printf("Linked List: ");
    display(head);

    // Insert in middle
    printf("Enter value to insert in middle: ");     scanf("%d", &data);     printf("Enter position to insert at: ");     scanf("%d", &pos);
    head = insertMiddle(head, data, pos);

    printf("After Insertion: ");     display(head);

    // Delete in middle     printf("Enter position to delete: ");     scanf("%d", &pos);     head = deleteMiddle(head, pos);

    printf("After Deletion: ");     display(head);

    // Display MAC Address (Windows only)     printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:


30. BINARY TREE TRAVERSAL.

#include <stdio.h>
#include <stdlib.h>

// Node structure struct Node {     int data;     struct Node* left;     struct Node* right;
};

// Create a new node
struct Node* createNode(int data) {     struct Node* node = (struct Node*) malloc(sizeof(struct Node));     node->data = data;     node->left = node->right = NULL;
    return node;
}

// Preorder traversal
void preorder(struct Node* root) {     if (!root) return;     printf("%d ", root->data);     preorder(root->left);     preorder(root->right);
}

// Inorder traversal
void inorder(struct Node* root) {
    if (!root) return;     inorder(root->left);     printf("%d ", root->data);     inorder(root->right);
}

// Postorder traversal void postorder(struct Node* root) {     if (!root) return;     postorder(root->left);     postorder(root->right);     printf("%d ", root->data);
}

int main() {     // Construct binary tree     struct Node* root = createNode(1);     root->left = createNode(2);     root->right = createNode(3);     root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Preorder Traversal: ");     preorder(root);
    printf("\n");

    printf("Inorder Traversal: ");     inorder(root);
    printf("\n");

    printf("Postorder Traversal: ");     postorder(root);
    printf("\n");

    // Display MAC Address (Windows only)     printf("\nMAC Address:\n");
    system("getmac");

    return 0;
}

OUTPUT:


31. CIRCULAR QUEUES USING ARRAY(MODULO DIVISION,QUEUE FULL,QUEUE EMPTY).
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

/* Insert element */ void enqueue(int x) {     if ((rear + 1) % SIZE == front) {
        printf("Queue is FULL\n");         return;
    }

    if (front == -1)         front = rear = 0;
    else         rear = (rear + 1) % SIZE;

    queue[rear] = x;
}

/* Delete element */ void dequeue() {     if (front == -1) {         printf("Queue is EMPTY\n");
        return;
    }

    if (front == rear)         front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

/* Display queue */ void display() {
    int i;     if (front == -1) {         printf("Queue is EMPTY\n");
        return;
    }

    printf("Queue elements: ");
    i = front;     while (1) {         printf("%d ", queue[i]);         if (i == rear)             break;         i = (i + 1) % SIZE;
    }     printf("\n");
}

int main() {

    /* Circular Queue Operations */     enqueue(10);     enqueue(20);     enqueue(30);     enqueue(40);

    display();

    dequeue();
    enqueue(50);

    display();

    /* ---- MAC ADDRESS AT LAST ---- */     printf("\nMAC Address of this system:\n");     system("getmac");

    return 0;
}

OUTPUT:


32. SPARSE MATRIX REPRESENTATION USING LINKED LIST.

#include <stdio.h>
#include <stdlib.h> /* Node structure */ struct Node {     int row;     int col;     int value;     struct Node *next;
};
struct Node *head = NULL;
/* Insert non-zero element */ void insert(int r, int c, int v) {     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));     newNode->row = r;     newNode->col = c;     newNode->value = v;     newNode->next = NULL;    if (head == NULL) {         head = newNode;
    } else {
        struct Node *temp = head;         while (temp->next != NULL)             temp = temp->next;
        temp->next = newNode;
    }
}

/* Display sparse matrix */ void display() {     struct Node *temp = head;     printf("Sparse Matrix Representation using Linked List:\n");     printf("Row  Col  Value\n");     while (temp != NULL) {         printf("%d    %d    %d\n",
               temp->row, temp->col, temp->value);
        temp = temp->next;
    }
} int main() { int sparse[3][3] = {
        {0, 0, 3},
        {0, 4, 0},
        {5, 0, 0}
    };

    for (int i = 0; i < 3; i++) {         for (int j = 0; j < 3; j++) {             if (sparse[i][j] != 0)                 insert(i, j, sparse[i][j]);
        }
    }
/* ---- OUTPUT FIRST ---- */     display();
   /* ---- MAC ADDRESS LAST ---- */     printf("\nMAC Address of this system:\n");     system("getmac");

    return 0;
}

OUTPUT:

