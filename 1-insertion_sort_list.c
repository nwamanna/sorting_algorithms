#include "sort.h"
/**
*switch_int - swap the nodes accordingly
*@ptr: pointer to a doubly linked list
*@key: pointer to doubly linked list
*
*Return: Void
*/

void switch_int(listint_t *ptr, listint_t *key);
{
	if (ptr->prev == NULL && key != NULL && key->n < ptr->n)
	{
		printf("yes oh\n");
		if (temp->prev != NULL)
			temp->prev->next = key;
		if (key->next != NULL)
			key->next->prev = temp;
		key->prev = temp->prev;
		temp->prev = key;
		temp->next = key->next;
		key->next = temp;
		ptr = key;
		*list = key;
		break;
	}
}

/**
*insertion_sort_list - sort doubly_linked list in asc via the Insertion algthm
*@list: pointer to a pointer
*
*Return: Void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list;
	listint_t *key;

	while (ptr != NULL)
	{
		key = ptr->next;
		while (ptr != NULL  && key != NULL && key->n < ptr->n)
		{
			listint_t *temp = ptr;

			switch_int(ptr, key);
			if (temp->prev != NULL)
				temp->prev->next = key;
			if (key->next != NULL)
				key->next->prev = temp;
			key->prev = temp->prev;
			temp->next = key->next;
			key->next = temp;
			printf("key is %d\n", key->n);
			temp->prev = key;
			if (temp->prev == NULL)
			{
				temp->prev = key;
				temp->next = key->next;
				key->prev = NULL;
				key->next = temp;
			}
			if (ptr->prev == NULL)
				break;
			ptr = ptr->prev->prev;
			printf("ptr is %d\n", ptr->n);
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
