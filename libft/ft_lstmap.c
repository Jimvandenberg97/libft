/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:43:57 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:09:33 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *temp;
	t_list *new;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(f(temp->content));
	if (new == NULL)
		return (NULL);
	temp = new;
	while (lst != NULL)
	{
		new->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		new = new->next;
	}
	return (temp);
}
