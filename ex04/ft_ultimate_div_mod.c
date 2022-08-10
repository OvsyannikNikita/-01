/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:03:48 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/02 11:22:30 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}

// int main()
// {
// 	int a = 5;
// 	int b = 2;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("%d %d \n",a,b);
// }