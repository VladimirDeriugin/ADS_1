#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Vector.h"

void vectorInit(Vector** vec, void* data)
{

    (*vec) = (Vector*) malloc(sizeof(Vector));
    (*vec)->size = 0;

    List* tmp = (List*) malloc(sizeof(List));
    tmp->value = data;
    tmp->next = NULL;
    (*vec)->data = tmp;
    (*vec)->size++;

}

int checkMax(Vector *vec)
{
    if(malloc(sizeof(Vector)))
        return 0;
    return 1;
}

void push(Vector** vec, void *data)
{
    List *tmp = (List*) malloc(sizeof(List));
    tmp->value = data;
    tmp->next = (*vec)->data;
    (*vec)->data = tmp;
    (*vec)->size++;
}

int changeElement(Vector* vec, int index, void *data)
{
    if(index < 0 || index >= vec->size)
        return 0;
    List* tmp = vec->data;
    for(int i = 0; i < index; i++)
        tmp = tmp->next;
    tmp->value = data;
    return 1;
}

int addElement(Vector **vec, int index, void *data)
{
    if(index < 0 || index >= (*vec)->size)
        return 0;

    List* tmp = (*vec)->data;
    for(int i = 0; i < index-1; i++)
        tmp = tmp->next;
    List* tmp2 = malloc(sizeof(List));
    tmp2->value = data;
    tmp2->next = tmp->next;
    tmp->next = tmp2;
    (*vec)->size++;
    return 1;
}

int findElement(Vector *vec, void *data)
{
    List* tmp = vec->data;
    for(int i = 0; i < vec->size; i++, tmp = tmp->next)
        if(*(int*)tmp->value == *(int*) data)
            return i;
    return -1;
}

void* getElement(Vector *vec, int index)
{
    if(index < 0 || index >= vec->size)
        return NULL;
    List* tmp = vec->data;
    
    for(int i = 0 ; i < index; i++)
        tmp = tmp->next;
    return tmp->value;
}

void vectorClear(Vector **vec)
{
    free((*vec)->data);
    (*vec)->size = 0;
    free((*vec));
}