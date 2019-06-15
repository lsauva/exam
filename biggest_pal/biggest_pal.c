 /* ************************************************************************** */
 /*                                                                            */
 /*                                                        :::      ::::::::   */
 /*   biggest_pal.c                                      :+:      :+:    :+:   */
 /*                                                    +:+ +:+         +:+     */
 /*   By: aait-ihi <marvin@42.fr>                    +#+  +:+       +#+        */
 /*                                                +#+#+#+#+#+   +#+           */
 /*   Created: 2019/06/15 15:10:51 by aait-ihi          #+#    #+#             */
 /*   Updated: 2019/06/15 17:17:35 by aait-ihi         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */

 #include <unistd.h>

 int ft_strlen(const char *str)
 {
     size_t size = 0;
     while (str && *str++)
         size++;
     return (size);
 }

 void biggest_pal(char *str, int size,int posibilities)
 {
     int i, j, c = 0;

     while(c < posibilities)
     {
         i = -c;
         j = size - c - 1;
         while (i < j && str[i] == str[j])
         {
             i++;
             j--;
         }
         if(str[i] == str[j])
         {
                 write(1, &str[-c], size);
                 return ;
         }
         c++;
     }
     if(str[1])
         biggest_pal(str + 1, size - 1, posibilities + 1);
 }

 int main(int ac, char *av[])
 {
     if (ac == 2)
         biggest_pal(av[1], ft_strlen(av[1]), 1);
     write(1, "\n", 1);
 }
