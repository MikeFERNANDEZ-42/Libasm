/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:09:47 by user42            #+#    #+#             */
/*   Updated: 2020/09/19 20:25:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/libasm.h"

void			check_ft_strlen()
{
	char 	*str;

	printf("\n\033[1;32m\tFT_STRLEN : \033[0;m\n\n");
	str = "Bonjour";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "Bonjour a toutes et a tous";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
	str = "Bonjour je suis le test d'une phrase beaucoup beaucoup trop longue,bon, je pense que cela sera suffisant! Une petite phrase en plus pour etre sur!";
	printf("str -> '%s'\n", str);
	printf("   strlen: %d\n", (int)strlen(str));
	printf("ft_strlen: %d\n\n", (int)ft_strlen(str));
}

void			check_ft_strcpy()
{
	char		*src_text;
	char		*dest_text;
	char		*src;
	char		*dest;
	char		*ft_src;
	char		*ft_dest;

	printf("\n\033[1;32m\tFT_STRCPY : \033[0;m\n\n");
	src_text = "Bonjour";
	dest_text = "A toutes et a tous";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "A toutes et a tous";
	dest_text = "Bonjour";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "";
	dest_text = "Bonjour";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);

	src_text = "Bonjour";
	dest_text = "";
	printf("src -> '%s' : dest -> '%s'\n", src_text, dest_text);
	src = strdup(src_text);
	dest = strdup(dest_text);
	ft_src = strdup(src_text);
	ft_dest = strdup(dest_text);
	strcpy(dest, src);
	ft_strcpy(ft_dest, ft_src);
	printf("   strcpy: %s\nft_strcpy: %s\n\n", dest, ft_dest);
}

void			check_ft_strcmp()
{
	char		*s1;
	char		*s2;

	printf("\n\033[1;32m\tFT_STRCMP : \033[0;m\n\n");

	printf("s1 -> '%s' : s2 -> '%s'\n", "Bonjour", "Bonjour");
	printf("   strcmp: %d\n", strcmp("Bonjour", "Bonjour"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Bonjour", "Bonjour"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "Z", "A");
	printf("   strcmp: %d\n", strcmp("Z", "A"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Z", "A"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "A", "Z");
	printf("   strcmp: %d\n", strcmp("A", "Z"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("A", "Z"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "Bonjoir", "Bonjour");
	printf("   strcmp: %d\n", strcmp("Bonjoir", "Bonjour"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Bonjoir", "Bonjour"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "Bonso", "Bonjour");
	printf("   strcmp: %d\n", strcmp("Bonso", "Bonjour"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Bonso", "Bonjour"));
	
	printf("s1 -> '%s' : s2 -> '%s'\n", "Bonjour", "Bonso");
	printf("   strcmp: %d\n", strcmp("Bonjour", "Bonso"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Bonjour", "Bonso"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "", "Bonjour");
	printf("   strcmp: %d\n", strcmp("", "Bonjour"));
	printf("ft_strcmp: %d\n\n", ft_strcmp("", "Bonjour"));

	printf("s1 -> '%s' : s2 -> '%s'\n", "Bonjour", "");
	printf("   strcmp: %d\n", strcmp("Bonjour", ""));
	printf("ft_strcmp: %d\n\n", ft_strcmp("Bonjour", ""));

	printf("s1 -> '%s' : s2 -> '%s'\n", "", "");
	printf("   strcmp: %d\n", strcmp("", ""));
	printf("ft_strcmp: %d\n\n", ft_strcmp("", ""));
}

void			ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void			check_ft_read()
{
	int			fd = open("text.txt", O_RDONLY);
	int			ft_fd = open("text.txt", O_RDONLY);
	int			ret;
	int			ft_ret;
	char		buffer[30];
	char		ft_buffer[30];
	int			value;

	printf("\n\033[1;32m\tFT_READ : \033[0;m\n\n");

	value = 15;
	for (int i = 0; i < 3; i++)
	{
		ft_bzero(buffer, 30);
		ft_bzero(ft_buffer, 30);
		ret = read(fd, buffer, value);
		ft_ret = ft_read(ft_fd, ft_buffer, value);
		printf("   read: '%s' -> %d\n", buffer, ret);
		printf("ft_read: '%s' -> %d\n\n", ft_buffer, ft_ret);
		value += 5;
	}

	printf("---> error bad fd test\n");
	ft_bzero(buffer, 30);
	ft_bzero(ft_buffer, 30);
	errno = 0;
	ret = read(-1, buffer, 15);
	printf("   read: errno: %d %s -> %d\n", errno, strerror(errno), ret);
	printf("buffer: '%s'\n", buffer);
	errno = 0;
	ft_ret = ft_read(-1, ft_buffer, 15);
	printf("ft_read: errno: %d %s -> %d\n", errno, strerror(errno), ft_ret);
	printf("buffer: '%s'\n\n",ft_buffer);

	printf("---> error bad buffer test\n");
	ft_bzero(buffer, 30);
	ft_bzero(ft_buffer, 30);
	errno = 0;
	ret = read(fd, NULL, 15);
	printf("   read: errno: %d %s -> %d\n", errno, strerror(errno), ret);
	printf("buffer: '%s'\n", buffer);
	errno = 0;
	ft_ret = ft_read(ft_fd, NULL, 15);
	printf("ft_read: errno: %d %s -> %d\n", errno, strerror(errno), ft_ret);
	printf("buffer: '%s'\n\n",ft_buffer);

	close(fd);
	close(ft_fd);
}

void			check_ft_write()
{
	int ret;
	int ft_ret;
	char *str;

	printf("\n\033[1;32m\tFT_WRITE : \033[0;m\n\n");
	str = "Bonjour a toutes et a tous";
	printf("string : '%s'\n", str);
	ret = write(1, str, ft_strlen(str));
	printf(":    write returned : %d\n", ret);
	ft_ret = ft_write(1, str, ft_strlen(str));
	printf(": ft_write returned : %d\n\n", ft_ret);

	str = "";
	printf("string : '%s'\n", str);
	ret = write(1, str, ft_strlen(str));
	printf(":    write returned : %d\n", ret);
	ft_ret = ft_write(1, str, ft_strlen(str));
	printf(": ft_write returned : %d\n\n", ft_ret);

	printf("--> Error with bad fd\n");	
	str = "Ceci est un test";
	printf("string : '%s'\n", str);
	errno = 0;
	ret = write(489, str, ft_strlen(str));
	printf(":    write returned : %d : %s -> %d\n", ret, strerror(errno), errno);
	errno = 0;	
	ft_ret = ft_write(489, str, ft_strlen(str));
	printf(": ft_write returned : %d : %s -> %d\n\n", ft_ret, strerror(errno), errno);	
}

void			check_ft_strdup()
{
	printf("\n\033[1;32m\tFT_STRDUP : \033[0;m\n\n");

	char *text;

	text = "Bonjour a toutes et a tous";
	printf("original text : '%s'\n", text);
	char *str = strdup(text);
	char *ft_str = ft_strdup(text);
	printf("   strdup: '%s'\nft_strdup: '%s'\n\n", str, ft_str);
	free(str);
	free(ft_str);

	text = "";
	printf("original text : '%s'\n", text);
	str = strdup(text);
	ft_str = ft_strdup(text);
	printf("   strdup: '%s'\nft_strdup: '%s'\n\n", str, ft_str);
	free(str);
	free(ft_str);

	text = "Ceci est un second test pour verifier que tout fonctionne";
	printf("original text : '%s'\n", text);
	str = strdup(text);
	ft_str = ft_strdup(text);
	printf("   strdup: '%s'\nft_strdup: '%s'\n", str, ft_str);
	free(str);
	free(ft_str);

	printf("\n");
}

int				main(int argc, char **argv)
{
	check_ft_strlen();

	getchar();
	check_ft_strcpy();
	getchar();
	check_ft_strcmp();
	getchar();
	check_ft_strdup();
	getchar();
	check_ft_read();
	getchar();
	check_ft_write();
	getchar();
	return (0);
}