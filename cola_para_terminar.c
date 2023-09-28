


#include <stdlib.h>
// malloc and friends

#include <stdbool.h>
// bool, true y false

#include <stdio.h>
// printf y scanf

#include <assert.h>
// assert

typedef struct
{
	int* queue;   /**!< Contenedor de la cola. Es un arreglo dinámico de ints. */
	size_t front;    /**!< Índice al elemento más antiguo */
	size_t back;     /**!< Índice al elemento más reciente */
	size_t len;      /**!< Número actual de elementos en la cola */
	size_t capacity; /**!< Número máximo de elementos en la cola */
} Queue;

Queue* Queue_New(       size_t capacity );
void   Queue_Delete(    Queue** this );
void   Queue_Enqueue(   Queue* this, int data );
int    Queue_Dequeue(   Queue* this );
int    Queue_Peek(      Queue* this );
bool   Queue_IsEmpty(   Queue* this );
bool   Queue_IsFull(    Queue* this );
size_t Queue_Len(       Queue* this );
size_t Queue_Capacity(  Queue* this );
void   Queue_MakeEmpty( Queue* this );


Queue* Queue_New( size_t capacity )
{
}

void Queue_Delete( Queue** this )
{
}

void Queue_Enqueue( Queue* this, int data )
{
}

int Queue_Dequeue( Queue* this )
{
}

int Queue_Peek( Queue* this )
{
}

bool Queue_IsEmpty( Queue* this )
{
}

bool Queue_IsFull( Queue* this )
{
}

size_t Queue_Len( Queue* this )
{
}

size_t Queue_Capacity( Queue* this )
{
}

void Queue_MakeEmpty( Queue* this )
{
}

int main()
{

}





