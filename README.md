# CSE 1102 Structured Programming Sessional, Week 04

## Experiment: Loops in C


## 1. Purpose of the Lab

This lab is designed to help beginners learn **simple loops in C programming** through **gradual and repetitive practice**. Students will solve closely related problems where each task slightly builds on earlier ones. Only **simple loops** are covered; **nested loops are not included**.


## 2. Prerequisites

Students should be familiar with:

* Basic structure of a C program
* Variables and data types (`int`)
* Input and output using `printf()` and `scanf()`
* Relational operators (`<`, `<=`, `>`, `==`)
* Conditional statements (`if else` and `switch`)

## 3. Lab Rules

1. Write the algorithm/pseudcode before writing the program.
2. Perform a dry run before executing the program.
3. Write output clearly in the lab report.
4. Move to the next task only after instructor approval.

## 4. Brief Theory

A **loop** allows a block of code to execute repeatedly as long as a condition remains true.

## 5. `for` Loop

### Syntax

```c
for(initialization; condition; updation)
{
    statement(s);
}
```


### General Flow of a for Loop

Start → Initialization → Condition Check → Execute Statement(s) → Update Variable → Condition Check → … → End

![General Flow of a for Loop](images/for_loop_flow.png)


### Lab Tasks:

### Example 1: Print Numbers from 1 to 5 (for Loop)

**Algorithm:**

1. Start
2. Set `i = 1`
3. Check if `i <= 5`
4. Print `i`
5. Increase `i` by 1
6. Repeat steps 3–5
7. End

**Program:**

```c
#include <stdio.h>

int main()
{
    int i;   // loop control variable

    for(i = 1; i <= 5; i++)   // initialize i, check condition, update i
    {
        printf("%d ", i);   // executed repeatedly while condition is true
    }

    return 0;   // program ends here
}

```
**Dry Run / Trace Table:**

| Iteration | i (before) | Condition     | Printed | i (after) |
| --------: | ---------- | ------------- | ------- | --------- |
|         1 | 1          | 1 ≤ 5 (True)  | 1       | 2         |
|         2 | 2          | 2 ≤ 5 (True)  | 2       | 3         |
|         3 | 3          | 3 ≤ 5 (True)  | 3       | 4         |
|         4 | 4          | 4 ≤ 5 (True)  | 4       | 5         |
|         5 | 5          | 5 ≤ 5 (True)  | 5       | 6         |
|         6 | 6          | 6 ≤ 5 (False) | —       | Loop ends |


**Output:**

```
1 2 3 4 5
```

#### Task 1: 

Write a C program to print values from 1 to 20 using `for` loop.

#### Task 2: 

Copy the following code, paste it to your codeblocks, and **update the code by filling the blanks** so that it prints **20 to 30**.

```c
#include <stdio.h>

int main()
{
    int i;

    for (i = ___; i __ __ ; i ___)
    {
        printf("%d ", i);
    }

    return 0;
}
```

#### Task 3:
Write a C program to print 10 to 1 using for loop. 
*[hint: use decrement operator in the updation.]*


### Example 2: Find the Sum of Even Numbers from 1 to 10 (for Loop)

**Algorithm:**

1. Start
2. Set `i = 1`
3. Set `sum = 0`
4. Check if `i <= 10`
5. If `i` is even, add `i` to `sum`
6. Increase `i` by 1
7. Repeat steps 4–6
8. Print the value of `sum`
9. End


**Program:**

```c
#include <stdio.h>

int main()
{
    int i;
    int sum = 0;   // stores sum of even numbers

    for(i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
```

**Dry Run / Trace Table:**

| Iteration | i (before) | i % 2 == 0 | sum (before) | sum (after) |
| --------: | ---------- | ---------- | ------------ | ----------- |
|         1 | 1          | False      | 0            | 0           |
|         2 | 2          | True       | 0            | 2           |
|         3 | 3          | False      | 2            | 2           |
|         4 | 4          | True       | 2            | 6           |
|         5 | 5          | False      | 6            | 6           |
|         6 | 6          | True       | 6            | 12          |
|         7 | 7          | False      | 12           | 12          |
|         8 | 8          | True       | 12           | 20          |
|         9 | 9          | False      | 20           | 20          |
|        10 | 10         | True       | 20           | 30          |


**Output:**

```
Sum of even numbers = 30
```


### Task 4:

Write a C program to find the sum of even numbers from 1 to 50 using a `for` loop.

### Task 5:

Write a C program to find the **sum of odd numbers** from 1 to 50 using a `for` loop.


## 6. `while` Loop

### Syntax

```c
initialization;

while(condition)
{
    statement(s);
    updation;
}
```


### General Flow of a while Loop

Start → Initialization → Condition Check → Execute Statement(s) → Update Variable → Condition Check → … → End

![General Flow of a while Loop](images/while_loop_flow.png)


*(Note: The flow is similar to the `for` loop, but initialization and updation are written separately.)*


## Lab Tasks:

### Example 3: Print Numbers from 1 to 5 (while Loop)

**Algorithm:**

1. Start
2. Set `i = 1`
3. Check if `i <= 5`
4. Print `i`
5. Increase `i` by 1
6. Repeat steps 3–5
7. End


**Program:**

```c
#include <stdio.h>

int main()
{
    int i = 1;   // loop control variable initialization

    while(i <= 5)   // condition check
    {
        printf("%d ", i);   // executed repeatedly while condition is true
        i++;                // update loop variable
    }

    return 0;   // program ends here
}
```


**Dry Run / Trace Table:**

| Iteration | i (before) | Condition     | Printed | i (after) |
| --------: | ---------- | ------------- | ------- | --------- |
|         1 | 1          | 1 ≤ 5 (True)  | 1       | 2         |
|         2 | 2          | 2 ≤ 5 (True)  | 2       | 3         |
|         3 | 3          | 3 ≤ 5 (True)  | 3       | 4         |
|         4 | 4          | 4 ≤ 5 (True)  | 4       | 5         |
|         5 | 5          | 5 ≤ 5 (True)  | 5       | 6         |
|         6 | 6          | 6 ≤ 5 (False) | —       | Loop ends |


**Output:**

```
1 2 3 4 5
```


#### Task 6:

Write a C program to print values from **1 to 20** using a `while` loop.


#### Task 7:

Copy the following code, paste it into your CodeBlocks, and **update the code by filling the blanks** so that it prints **20 to 30**.

```c
#include <stdio.h>

int main()
{
    int i = ___;

    while(i __ __)
    {
        printf("%d ", i);
        i ___;
    }

    return 0;
}
```


#### Task 8:

Write a C program to print numbers from **10 to 1** using a `while` loop.
*[hint: use decrement operator in the update statement]*



### Example 4: Find the Sum of Even Numbers from 1 to 10 (while Loop)

**Algorithm:**

1. Start
2. Set `i = 1`
3. Set `sum = 0`
4. Check if `i <= 10`
5. If `i` is even, add `i` to `sum`
6. Increase `i` by 1
7. Repeat steps 4–6
8. Print the value of `sum`
9. End


**Program:**

```c
#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;   // stores sum of even numbers

    while(i <= 10)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
```

**Dry Run / Trace Table:**

| Iteration | i (before) | i % 2 == 0 | sum (before) | sum (after) |
| --------: | ---------- | ---------- | ------------ | ----------- |
|         1 | 1          | False      | 0            | 0           |
|         2 | 2          | True       | 0            | 2           |
|         3 | 3          | False      | 2            | 2           |
|         4 | 4          | True       | 2            | 6           |
|         5 | 5          | False      | 6            | 6           |
|         6 | 6          | True       | 6            | 12          |
|         7 | 7          | False      | 12           | 12          |
|         8 | 8          | True       | 12           | 20          |
|         9 | 9          | False      | 20           | 20          |
|        10 | 10         | True       | 20           | 30          |


**Output:**

```
Sum of even numbers = 30
```


#### Task 9:

Write a C program to find the **sum of even numbers from 1 to 50** using a `while` loop.


#### Task 10:

Write a C program to find the **sum of odd numbers from 1 to 50** using a `while` loop.

