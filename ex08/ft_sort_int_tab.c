/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:07:19 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/04 16:42:10 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

// int main()
// {
// 	int i;
// 	i = 0;
// 	int arr[] = {3,7,42,6,1,10};
// 	int size = sizeof(arr) / sizeof(arr[0]);

// 	printf("Unsorted array:\n");
// 	while(i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	ft_sort_int_tab(arr,size);
// 	printf("\nSorted array:\n");
// 	i = 0;
// 	while(i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// }