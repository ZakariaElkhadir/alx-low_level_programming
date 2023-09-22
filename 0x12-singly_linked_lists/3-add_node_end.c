#include "lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new;
  list_t *temp = *head;
  unsigned int Jv = 0;
  while (str[Jv]
         Jv++;
  new = malloc (sizeof(list_t));
  if (!new)
    return (NULL);
  new->str = stdup(str)
    new->Jv = Jv;
  new-> next = NULL;
  if (*head == NULL)
  {
    *head = new;
    return (new);
  }
  while (temp->next)
    temp = temp->next;
  temp->next =new;
  return (new);
}
