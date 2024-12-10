/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouriz <aabouriz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:57:24 by aabouriz          #+#    #+#             */
/*   Updated: 2024/11/06 21:19:29 by aabouriz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*current;
	int		arr[4] = {42, 1337, 21, 1336};

	head = (t_list *)malloc (sizeof (t_list));
	head->next = (t_list *)malloc (sizeof (t_list));
	head->next->next = (t_list *)malloc (sizeof (t_list));
	head->next->next->next = ft_lstnew(&arr[3]);
	head->content = &arr[0];
	head->next->content = &arr[1];
	head->next->next->content = &arr[2];
	current = head;
	while (current && current->content)
	{
		printf ("%d\n", *((int *)(current->content)));
		current = current->next;
	}
	return (0);
}
*/
