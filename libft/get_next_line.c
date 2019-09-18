/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:16:34 by kzina             #+#    #+#             */
/*   Updated: 2019/08/07 18:05:19 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_lst	*get_lst(const int fd, t_lst **lst)
{
	t_lst	*first;
	t_lst	*lst_fd;

	if (*lst == NULL)
	{
		*lst = (t_lst*)ft_memalloc(sizeof(t_lst));
		(*lst)->fd = -1;
	}
	first = *lst;
	while (first)
	{
		if (first->fd == fd)
			return (first);
		if (first->next != NULL)
			first = first->next;
		else
			break ;
	}
	lst_fd = (t_lst*)ft_memalloc(sizeof(t_lst));
	lst_fd->content = (char*)ft_memalloc(sizeof(char) * 1);
	lst_fd->fd = fd;
	lst_fd->next = NULL;
	first->next = lst_fd;
	return (lst_fd);
}

static	int		read_fd_to_lst(t_lst *lst, const int fd)
{
	char	*line_buff;
	int		read_byte;
	char	*to_free;

	line_buff = (char*)ft_memalloc(sizeof(char) * (BUFF_SIZE + 1));
	read_byte = 1;
	while (ft_strchr(line_buff, '\n') == NULL && read_byte > 0)
	{
		if ((read_byte = read(fd, line_buff, BUFF_SIZE)) > 0)
		{
			line_buff[read_byte] = '\0';
			to_free = lst->content;
			lst->content = ft_strjoin(lst->content, line_buff);
			ft_strdel((void **)&to_free);
		}
		else if (read_byte <= 0 && (ft_strlen(lst->content) == 0))
		{
			ft_strdel((void **)&line_buff);
			return (read_byte == 0 ? 0 : -1);
		}
	}
	ft_strdel((void **)&line_buff);
	return (1);
}

static	char	*get_line(t_lst *lst)
{
	char	*res;
	char	*to_free;
	int		size;

	if (ft_strchr(lst->content, '\n') == NULL)
	{
		res = ft_strdup(lst->content);
		ft_strdel((void **)&lst->content);
		lst->content = (char*)ft_memalloc(sizeof(char) * 1);
		return (res);
	}
	size = ft_strlen(lst->content) - ft_strlen(ft_strchr(lst->content, '\n'));
	res = ft_strnew(size);
	res = ft_memcpy(res, lst->content, size);
	to_free = lst->content;
	lst->content = ft_strdup(ft_strchr(lst->content, '\n') + 1);
	ft_strdel((void **)&to_free);
	return (res);
}

int				get_next_line(const int fd, char **line)
{
	static t_lst	*lst;
	t_lst			*tmp;
	int				res_read;

	if (fd < 0 || !line)
		return (-1);
	tmp = get_lst(fd, &lst);
	if (ft_strchr(tmp->content, '\n') == NULL)
	{
		if ((res_read = read_fd_to_lst(tmp, fd)) <= 0)
			return (res_read == 0 ? 0 : -1);
		else
		{
			*line = get_line(tmp);
			return (1);
		}
	}
	else
	{
		*line = get_line(tmp);
		return (1);
	}
	return (0);
}
