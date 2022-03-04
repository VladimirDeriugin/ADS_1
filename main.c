#include <stdio.h>
#include <stdlib.h>
#include "Vector.h"

int main()
{
 
    Vector* vector;
    int a = 5, b = 26, c = 66, d = 29;
    
    vectorInit(&vector, &a);
    push(&vector, &a);
    push(&vector, &b);
    push(&vector, &a);
    push(&vector, &d);
    push(&vector, &a);
    addElement(&vector, 2, &c);
    changeElement(vector, 0, &c);
    printf("Found element %d on %d position.\n", d, findElement(vector, &d));
    for(int i = 0; i < vector->size; i++)
        printf("%d ", *(int*)getElement(vector, i));
    printf("\n");
    if(checkMax(vector))
        printf("Not enough memory\n");
    else 
        printf("Enough memory\n");
}