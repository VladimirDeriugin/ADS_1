#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct List{
    void* value;
    struct List* next;
} List;

typedef struct Vector{
    List* data;
    int size;
} Vector;

/*
*   vectorInit      -   make empty list
*   checkMax        -   check size > MAX_SIZE
*   push            -   add one element on the top
*   changeElement   -   change one element in the direct place
*   addElement      -   add one element into direct place
*   findElement     -   find first element with a value and return index
*   getElement      -   check element in the place by index (return pointer)
*   vectorClear     -   clear list
*/

void vectorInit(Vector** vec, void* data);
int checkMax(Vector* vec);
void push(Vector** vec, void* data);
int changeElement(Vector* vec, int index, void* data);
int addElement(Vector** vec, int index, void* data);
int findElement(Vector* vec, void* data);
void* getElement(Vector *vec, int index);
void vectorClear(Vector** vec);
#endif
