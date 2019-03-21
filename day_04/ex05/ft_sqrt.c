/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 21:44:08 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/14 13:53:43 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if(nb == 0)
		return(0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0 && i * i == nb)
		return (i);
	else
		return(0);
}