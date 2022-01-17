# 42Cursus-push_swap
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions.
To succeed you’ll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

## Introduction:
The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of instructions to manipulate both stacks.<br/>

Your goal ? Write a program in C called push_swap which calculates and displays on the standard output the smallest program using Push_swap instruction language that sorts the integer arguments received.

### General Instructions:
- The executable file must be named push_swap.<br/>
- You must submit a Makefile. That Makefile needs to compile the project and must contain the usual rules(all, clean, fclean, re). It can only recompile the program if necessary.<br/>
- You have to handle errors in a sensitive manner. In no way can your program quit in an unexpected manner (Segmentation fault, bus error, double free, etc).
- Neither program can have any memory leaks.<br/>
- Within your mandatory part you are allowed to use the following functions:
  - write
  - read
  - malloc
  - free
  - exit
- The game is composed of 2 stacks named a and b.
- To start with:
  - the stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
  - b is empty.
- The goal is to sort in ascending order numbers into stack a.
- To do this you have the following operations at your disposal:
  - **sa :**  swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).
  - **sb :**  swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
  - **ss :**  sa and sb at the same time.
  - **pa :**  push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  - **pb :**  push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  - **ra :**  rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
  - **rb :**  rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
  - **rr :**  ra and rb at the same time.
  - **rra :**  reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
  - **rrb :**  reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
  - **rrr :**  rra and rrb at the same time.

### Example:
```
----------------------------------------------------------------------------------------------------------
Init a and b:
2
1
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
1
2
3
6
5
8
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
----------------------------------------------------------------------------------------------------------
```
<p align="center">
This example sort integers from a in 12 instructions.
</p>

### The “push_swap” program:
- You have to write a program named push_swap which will receive as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).<br/>
- The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top.<br/>
- Instructions must be separated by a ’\n’ and nothing else.<br/>
- The goal is to sort the stack with the minimum possible number of operations. During defence we’ll compare the number of instructions your program found with a maximum number of operations tolerated. If your program either displays a list too big or if the list isn’t sorted properly, you’ll get no points.<br/>
- If no parameters are specified, the program must not display anything and give the prompt back.<br/>
- In case of error, you must display Error followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer, and/or there are duplicates.<br/>

```
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>
```
<!--
- Not interpret unclosed quotes or unspecified special characters like \ or ;.<br/>
- Not use more than one global variable, think about it and be ready to explain why you do it.<br/>
- Show a prompt when waiting for a new command.<br/>
- Have a working History.<br/>
- Search and launch the right executable (based on the PATH variable or by using relative or absolute path)<br/>
- It must implement the builtins:<br/>
  - echo with option -n<br/>
  - cd with only a relative or absolute path<br/>
  - pwd with no options<br/>
  - export with no options<br/>
  - unset with no options<br/>
  - env with no options or arguments<br/>
  - exit with no options<br/>
- ’ inhibit all interpretation of a sequence of characters.<br/>
- " inhibit all interpretation of a sequence of characters except for $.<br/>
- Redirections:<br/>
  - “<“ should redirect input.<br/>
  - “>“ should redirect output.<br/>
  - “<<” read input from the current source until a line containing only the delimiter is seen. it doesn’t need to update history!<br/>
  - “>>” should redirect output with append mode.<br/>
- Pipes | The output of each command in the pipeline is connected via a pipe to the input of the next command.<br/>
- Environment variables ($ followed by characters) should expand to their values.<br/>
- $? should expand to the exit status of the most recently executed foreground pipeline.<br/>
- ctrl-C ctrl-D ctrl-\ should work like in bash.<br/>
- When interactive:<br/>
  - ctrl-C print a new prompt on a newline.<br/>
  - ctrl-D exit the shell.<br/>
  - ctrl-\ do nothing.<br/>

<p readline function can produce some leak you don’t need to fix this.<br/>
But beware your own code should not produce leaks.<br/>
You should limit yourself to the subject description.<br/>
Anything not asked is not required.<br/>
For every point, if you have any doubt take bash as a reference.<br/></p> -->
