/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:54:48 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/01 02:08:16 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "abcd";
	char s2[] = "abcde";
	unsigned int n;

	n = 6;
	printf("s1 : %s, s2 : %s, n : %d\n", s1, s2, n);
	printf("result : %d\n", ft_strncmp(s1, s2, n));
}
