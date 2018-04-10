#include <stdlib.h>
#include "list.h"

int cycle_detector(const t_list *list)
{
	if (list == NULL)
		return (1);
	const t_list *slow;
	const t_list *fast;

	slow = list;
	fast = list;
	while (1)
	{
		slow = slow->next;
		if (fast->next != NULL)
			fast = fast->next->next;
		else
			return (0);
		if (slow == NULL || fast == NULL)
			return (0);
		if (slow == fast)
			retrun (1);
	}
}
