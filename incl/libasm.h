/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:22:27 by user42            #+#    #+#             */
/*   Updated: 2020/09/19 20:22:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

unsigned long	ft_strlen(char *s);
char			*ft_strcpy(char *dst, const char *src);
int				ft_strcmp(char *s1, char *s2);
int				ft_write(int fd, char *s, int len);
int				ft_read(int fd, void *buf, size_t len);
char			*ft_strdup(char *s);

#endif
