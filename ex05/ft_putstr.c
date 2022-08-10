/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:40:17 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/02 14:30:56 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

// int main()
// {	
// 	char str[] = "Hell o World";
// 	ft_putstr(str);
// }	