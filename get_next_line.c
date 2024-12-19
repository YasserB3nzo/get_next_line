/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenzidi <ybenzidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 22:20:41 by ybenzidi          #+#    #+#             */
/*   Updated: 2024/12/17 22:27:45 by ybenzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

void	ft_strtrim(char **storage)
{
	int i;
	i = 0;
	while (**storage != '\n')
	{
		(*storage)++;
		i++;
	}
		
}
 char	*ft_strncpy(char *dest, char *src, int destsize)
{
	int	i;

	i = 0;
	if (destsize)
	{
		while (src[i] && i < destsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

 char *get_next_line(int fd)
 {
	//size_t count ;
	char a[20];
	static char *storage;
	read(fd,a,20);
	ft_strcat(storage,a);
	return(f_work(storage));
 }
















// so during a process one file discreptor table is open that stores al the f position 
// file positiom in open file table(global table)
