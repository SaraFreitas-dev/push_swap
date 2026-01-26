*This project has been created as part of the 42 curriculum by sarfreit.*

# 🔢 push_swap

## 🧠 Description

`push_swap` is a project from 42 School that focuses on sorting algorithms and
data manipulation.

The objective is to sort a list of integers in ascending order using two stacks and a limited set of allowed operations, while outputting the smallest possible sequence of instructions.

The program works with:
- **Stack A**, which initially contains the integers.
- **Stack B**, which starts empty and is used as auxiliary storage.

---

## ♻️ Allowed Operations

- **sa** : swap the first two elements of stack A  
- **sb** : swap the first two elements of stack B  
- **ss** : sa and sb at the same time  

- **pa** : push the top element of stack B to stack A  
- **pb** : push the top element of stack A to stack B  

- **ra** : rotate stack A (first element becomes last)  
- **rb** : rotate stack B  
- **rr** : ra and rb at the same time  

- **rra** : reverse rotate stack A (last element becomes first)  
- **rrb** : reverse rotate stack B  
- **rrr** : rra and rrb at the same time  

---

## 🚨 Error Handling

The program displays:

"Error\n"

and exits if:

- An argument is not a valid integer  
- A number overflows or underflows an `int`  
- Duplicate values are provided  

All allocated memory is freed before exiting.

---

## 📋 Instructions

### ⚙️ Compilation

To compile the program, run:

```bash
make
```

This will generate the executable:

```bash
./push_swap
```

## 🚀 Execution

The program takes a list of integers as arguments:

```bash
./push_swap 3 2 1
```

It outputs the operations required to sort the stack. For example:
```bash
sa  
rra
```

## ✅ Checker

To verify if the output of `push_swap` correctly sorts the stack, use the checker.
It returns simply OK or KO.

```bash
./push_swap 3 2 1 | ./checkers/checker_linux 3 2 1
```
Or

```bash
ARG="5 4 3 2 1"; ./push_swap $ARG | ./checkers/checker_linux $ARG
```

Or...best of all...a random number generator ! !
```bash
ARG=$(shuf -i 0-1000 -n 100 | tr '\n' ' ')
./push_swap $ARG | ./checkers/checker_linux $ARG
```

You can also check the amount of operations performed to sort ARG by adding "wc -l"

```bash
ARG="5 4 3 2 1"; ./push_swap $ARG | wc -l
```

And finally, get an average of moves made

```bash
total=0
for i in {1..20}; do
  ARG=$(shuf -i 0-1000 -n 100 | tr '\n' ' ')
  n=$(./push_swap $ARG | wc -l)
  echo $n
  total=$((total+n))
done
echo "Average: $((total/20))"

670
674
...
690
655
677
Average: 664
```

If the input is already sorted, the program produces no output.

# 💧 Check for Leaks
```bash
valgrind --leak-check=full --show-leak-kinds=all ./push_swap
```
```bash
valgrind --leak-check=full --show-leak-kinds=all ./push_swap_bonus
```
---

## 🌐 Resources

- 42 School subject: `push_swap`  
- The following website: https://medium.com/@ulysse.gks/push-swap-in-less-than-4200-operations-c292f034f6c0
- Manual pages for stack manipulation and sorting concepts  
- Official 42 documentation and peer discussions  
- Use of AI to clarify pointer manipulation and linked list logic

