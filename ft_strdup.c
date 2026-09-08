/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edidier <edidier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:41:03 by edidier           #+#    #+#             */
/*   Updated: 2025/05/06 10:32:21 by edidier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(new))
		return (NULL);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*#include <stdio.h>
int	main(void)
{
	char *s = "Coucouuuu";
	char *dup;

	dup = ft_strdup(s);
	printf("s = %s\n", s);
	printf("dup = %s\n", dup);
	free(dup);
	return (0);
}*/
