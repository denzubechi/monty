#include "monty.h"
#include <ctype.h>

/**
 * m_pstr - print string from stack of ints up to null byte,
 * first non-ascii character, or end of stack
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
	{
		putchar(10);
		return;
	}

	temp = *stack;

	while (temp)
	{
		if (temp->n <= 0 || temp->n >= 128)
		{
			putchar(10);
			return;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	putchar(10);
}
