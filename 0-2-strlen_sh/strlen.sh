# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/11 15:17:52 by lsauvage          #+#    #+#              #
#    Updated: 2018/01/12 12:27:27 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# affichage de la variable FT_LINE | compte les caracteres | supprime les
# espaces en debut de ligne
# resultat OK en utilisant la commande 'source strlen.sh'
echo -n $FT_LINE | wc -m | sed 's/^[ \t]*//'
