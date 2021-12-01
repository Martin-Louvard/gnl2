/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:41:17 by malouvar          #+#    #+#             */
/*   Updated: 2021/12/01 12:56:30 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return ((void *)s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_memset(result, 0,  nmemb * size);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*mem;
	char		*buff;
	char		*line;
	int		r;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buff = ft_calloc((size_t)(BUFFER_SIZE + 1), sizeof(char));
	if (!buff)
		return (NULL);
	line = NULL;
	while (!ft_strchr(buff, '\n'))
	{
		r = read(fd, buff, BUFFER_SIZE);
		buff[BUFFER_SIZE] = 0;
	}

}
