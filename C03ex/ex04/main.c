/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 23:22:26 by youngjle          #+#    #+#             */
/*   Updated: 2020/11/01 03:07:07 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char *str = "abcd";
	char *to_find = "bc";

	printf("str[] : %s, to_find[] : %s\n", str, to_find);
	printf("result : %s\n", ft_strstr(str, to_find));
}
