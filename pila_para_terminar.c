
#include <stdlib.h>
// malloc and friends

#include <stdbool.h>
// bool, true y false

#include <stdio.h>
// printf y scanf


//----------------------------------------------------------------------
//  Declaración, Stack.h
//----------------------------------------------------------------------

// Reactive el bloque siguiente cuando haya movido este código al 
// archivo Stack.h.
#if 0 
#include <stdlib.h>
// malloc and friends

#include <stdbool.h>
// bool, true y false
#endif  


#include <assert.h>
// assert

typedef struct
{
	int* stack;      /**!< Contenedor de la pila. Es un arreglo dinámico de enteros. */
	size_t top;      /**!< Apunta al tope de la pila. */
	size_t capacity; /**!< Número máximo de elementos en la pila. */
} Stack;

/**
 * @brief Crea una pila 
 *
 * @param _capacity Número de elementos para la pila
 *
 * @return Una referencia a la pila
 */
Stack* Stack_New( size_t _capacity );

/**
 * @brief Destruye una pila
 *
 * @param this Referencia un objeto Stack
 */
void Stack_Delete( Stack** this );

/**
 * @brief Inserta un elemento en el top de la pila
 *
 * @param this Referencia un objeto Stack
 * @param _data Valor a insertar
 *
 * @pre La pila existe y no está llena
 */
void Stack_Push( Stack* this, int _data );

/**
 * @brief Extrae el elemento en el top de la pila
 *
 * @param this Referencia un objeto Stack
 *
 * @return El elemento en el top de la pila
 *
 * @pre La pila existe y no está vacía
 */
int Stack_Pop( Stack* this );

/**
 * @brief Observa al elemento en el top de la pila
 *
 * @param this Referencia un objeto Stack
 *
 * @return El elemento en el top de la pila
 *
 * @pre La pila existe y no está vacía
 * @post La pila no se ve afectada luego de llamar a esta función
 */
int Stack_Peek( Stack* this );

/**
 * @brief Indica si una pila está vacía
 *
 * @param this Referencia un objeto Stack
 *
 * @return true si la pila está vacía, false en cualquier otro caso
 *
 * @pre La pila existe
 */
bool Stack_IsEmpty( Stack* this );

/**
 * @brief Indica si la pila está llena
 *
 * @param this Referencia un objeto Stack
 *
 * @return true si la pila está llena, false en cualquier otro caso
 *
 * @pre La pila existe
 */
bool Stack_IsFull( Stack* this );

/**
 * @brief Devuelve el número actual de elementos en la pila
 *
 * @param this Referencia un objeto Stack
 *
 * @return El número de elementos actuales en la pila
 *
 * @pre La pila existe
 */
size_t Stack_Len( Stack* this );

/**
 * @brief Devuelve el número máximo de elementos que la pila puede almacenar
 *
 * @param this Referencia un objeto Stack
 *
 * @return El número máximo de elementos que la pila puede almacenar
 *
 * @pre La pila existe
 */
size_t Stack_Capacity( Stack* this );


/**
 * @brief Vuelve la pila a su estado original
 *
 * @param this Referencia un objeto Stack
 */
void Stack_MakeEmtpy( Stack* this );

//----------------------------------------------------------------------
//  Implementación, Stack.c
//----------------------------------------------------------------------

Stack* Stack_New( size_t _capacity )
{
}

void Stack_Delete( Stack** this )
{
}

void Stack_Push( Stack* this, int _data )
{
}

int Stack_Pop( Stack* this )
{
}

int Stack_Peek( Stack* this )
{
}

void Stack_MakeEmtpy( Stack* this )
{
}


bool Stack_IsEmpty( Stack* this )
{
	return (this->top == 0);
}

bool Stack_IsFull (Stack* this)
{
	return (this->top >= this->capacity);
}

size_t Stack_Capacity( Stack* this )
{
	return this->capacity;
}

size_t Stack_Len( Stack* this )
{
	return this->top;
}


//----------------------------------------------------------------------
//  Driver program, main.c
//----------------------------------------------------------------------
int main()
{
   Stack* miPila = Stack_New( 5 );

#if 0 
   printf( "La capacidad de la pila es: %ld\n", 
         Stack_Capacity( miPila ) );

   if( Stack_IsEmpty( miPila ) == true ){
      printf( "La pila está vacía.\n" );
   }

   Stack_Push( miPila, 1 );

   Stack_Push( miPila, 2 );

   if( Stack_IsEmpty( miPila ) == false ){
      printf( "La pila no está vacía.\n" );
   }

   Stack_Push( miPila, 3 );

   printf( "El número de elementos restantes en la pila es: %ld\n", 
         Stack_Len( miPila ) );

   printf( "Poping: %d\n", 
         Stack_Pop( miPila ) );

   printf( "Poping: %d\n", 
         Stack_Pop( miPila ) );

   printf( "El número de elementos restantes en la pila es: %ld\n", 
         Stack_Len( miPila ) );

   printf( "Queremos ver el elemento en el tope: %d\n", 
         Stack_Peek( miPila ) );

   printf( "Poping: %d\n", 
         Stack_Pop( miPila ) );
#endif  

   Stack_Delete( &miPila );
}
