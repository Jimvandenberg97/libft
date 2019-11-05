/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jivan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:26:08 by jivan-de      #+#    #+#                 */
/*   Updated: 2019/11/05 16:08:20 by jivan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	struct s_list *temp;
	struct s_list *new;

	if (lst == NULL)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		new = temp;
		temp = temp->next;
		del(new->content);
		free(new);
	}
	*lst = NULL;
}
