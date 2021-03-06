/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/12 17:12:46 by jkoopman       #+#    #+#                */
/*   Updated: 2019/04/01 14:34:34 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int char_cnt;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			char_cnt = 0;
			while (argv[i][char_cnt] != '\0')
			{
				ft_putchar(argv[i][char_cnt]);
				char_cnt++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
