/*
 * File: 13-is_palindrome.c
 * Auth: TF Letsoalo
 */

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the linked list is not a palindrome - 0.
 *         If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	/* Empty or single-node list is a palindrome */
	if (*head == NULL || (*head)->next == NULL)
		return (1);

	/* Find the middle node using slow and fast pointers */
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;
	}

	/* If the list has an odd number of nodes, move slow one step forward */
	if (fast != NULL)
		slow = slow->next;

	/* Reverse the second half of the list */
	while (slow != NULL)
	{
		next = slow->next;
		slow->next = prev;
		prev = slow;
		slow = next;
	}

	/* Compare values of nodes in the first and second halves of the list */
	while (prev != NULL)
	{
		if ((*head)->n != prev->n)
			return (0);
		*head = (*head)->next;
		prev = prev->next;
	}

	return (1);
}
