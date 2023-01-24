#include <stdio.h>
#include <stdlib.h>
#include "filaDuplamenteEncadeada.h"


void enqueue(int info){
	TQueue * new = new();
	new->data = info;
}

void list(){
	printf("\n\nListando valores:\n");
	last = first;
	while (last != NULL){
		printf("%d ",last->data);
		last = last->next;
	}
}
                        
void insertionSort(TQueue * first){
	TQueue * current;
	TQueue * prev;
	int pivot;
	for (current = first->next; current != NULL; current = current->next){
		pivot = current->data;
		prev = current->prev;
		while(prev != NULL && prev->data > pivot){
			prev->next->data = prev->data;
			prev = prev->prev;
		}
		if (prev == NULL)
		 	first->data = pivot;
		 else
		 	prev->next->data = pivot;
	}
}




int main(int argc, char **argv){
	
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(2);
	enqueue(1);
	list();
	insertionSort(first);
	list();

	return 0;
}

