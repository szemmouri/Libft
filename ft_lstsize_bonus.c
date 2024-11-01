/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szemmour <szemmour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:22:56 by szemmour          #+#    #+#             */
/*   Updated: 2024/11/01 16:22:57 by szemmour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

// int main()
// {
//     int num1 = 1;
//     int num2 = 2;
//     int num3 = 3;

//     t_list *head = ft_lstnew(&num1);
//     head->next = NULL;

//     t_list *Node1 = ft_lstnew(&num2);
//     Node1->next = NULL;
//     head->next = Node1;

//     t_list *Node2 = ft_lstnew(&num2);
//     Node2->next = NULL;
//     Node1->next = Node2;

//     t_list *Node3 = ft_lstnew(&num3);
//     Node3->next = NULL;
//     Node2->next = Node3;

//     printf("%d\n", ft_lstsize(head));

//     // Don't forget to free the allocated memory
//     free(Node3);
//     free(Node2);
//     free(Node1);
//     free(head);

//     return (0);
// }