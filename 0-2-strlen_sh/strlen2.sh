# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlen2.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/12 11:33:32 by lsauvage          #+#    #+#              #
#    Updated: 2018/01/12 12:24:12 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
# resultat OK avec 'source strlen2.sh'
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m | sed 's/^[ \t]*//'
fi
