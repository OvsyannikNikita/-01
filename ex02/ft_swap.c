/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:21:06 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/01 17:35:20 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main()
// {
// 	int a = 10;
// 	int b = 20;
// 	ft_swap(&a,&b);
// 	printf("%d\n",a);
// 	printf("%d\n",b);
// }