/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:58:24 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/04 13:53:23 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {	
// 	int arr[] = {1,2,3,4,5,6};
// 	int i;
// 	int size = sizeof(arr) / sizeof(arr[0]);

// 	i = 0;
// 	printf("Array:\n");
// 	while(i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nReversed Array: \n");
// 	ft_rev_int_tab(arr,size);
// 	while(i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// }