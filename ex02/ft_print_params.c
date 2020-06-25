/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:22:45 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/25 15:31:24 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i1;
	int		i2;

	if (argc > 1)
	{
		i1 = 0;
		while (++i1 < argc)
		{
			i2 = -1;
			while (argv[i1][++i2])
				ft_putchar(argv[i1][i2]);
			ft_putchar('\n');
		}
	}
	return (0);
}
