#!/bin/bash
filename='4digits.txt'
while read line; do
# reading each line
./push_swap $line | ./checker_linux $line 
# ./push_swap $line | wc -l
done < $filename