# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 07:40:16 by abelarif          #+#    #+#              #
#    Updated: 2021/07/19 11:48:11 by abelarif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
filename='5digits.txt'
while read line; do
# reading each line
./push_swap $line | ./checker_linux $line 
# ./push_swap $line | wc -l
done < $filename
