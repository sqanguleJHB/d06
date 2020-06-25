/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:31:44 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/25 15:54:39 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	main(int argc, char **argv)
{
	int 	i;

	if (argc > 1)
	{
		while (argc > 1)
		{
			i = -1;
			while (argv[argc - 1][++i])
				ft_putchar(argv[argc - 1][i]);
			ft_putchar('\n');
			argc--;
		}
	}
	return (0);
}
