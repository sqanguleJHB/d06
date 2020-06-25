/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:55:56 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/25 15:09:03 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int 	i;

	if (argc)
	{
		i = -1;
		while (argv[0][++i])
			ft_putchar(argv[0][i]);
		ft_putchar('\n');
	}
	return (0);
}
