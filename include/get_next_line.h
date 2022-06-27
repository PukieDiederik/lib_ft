/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drobert- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:32:17 by drobert-          #+#    #+#             */
/*   Updated: 2022/06/27 12:05:42 by drobert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//includes
# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 1024
# define OPEN_MAX 1024

//structs
typedef struct s_buff
{
	int		size;
	char	*buff;
}	t_buffer;

//functions
char	*get_next_line(int fd);

#endif
