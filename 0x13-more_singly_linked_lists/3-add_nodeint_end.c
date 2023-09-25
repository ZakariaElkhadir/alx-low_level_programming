#inlcude "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *new;
  new malloc(sizeof(listint_t));
  if(!new)
    return (NULL);
  new->n = n;
  new->next = *head;
  return (new);

}

