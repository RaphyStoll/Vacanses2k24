/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphael <raphael@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:13:56 by raphael           #+#    #+#             */
/*   Updated: 2024/07/28 18:14:07 by raphael          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, int words)
{
    int i;

    for (i = 0; i < words; i++)
        free(split[i]);
    free(split);
}

static int	count_words(const char *s, char c)
{
    int count;
    int in_substring;
    int i;

    count = 0;
    in_substring = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && in_substring == 0)
        {
            in_substring = 1;
            count++;
        }
        else if (s[i] == c)
            in_substring = 0;
        i++;
    }
    return (count);
}

char	**ft_split(char const *s, char c)
{
    char	**split;
    int		count;
    int		count2;
    int		start;

    if (!s)
        return (NULL);
    split = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!split)
        return (NULL);
    count = 0;
    count2 = 0;
    while (s[count])
    {
        while (s[count] && s[count] == c)
            count++;
        start = count;
        while (s[count] && s[count] != c)
            count++;
        if (start < count)
        {
            split[count2] = ft_substr(s, start, count - start);
            if (!split[count2])
            {
                free_split(split, count2);
                return (NULL);
            }
            count2++;
        }
    }
    split[count2] = NULL;
    return (split);
}
