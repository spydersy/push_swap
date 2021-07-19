# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 07:40:16 by abelarif          #+#    #+#              #
#    Updated: 2021/07/19 09:00:55 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
filename='4digits.txt'
while read line; do
# reading each line
./push_swap $line | ./checker_linux $line 
# ./push_swap $line | wc -l
done < $filename
