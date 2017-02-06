---
title: CS 246 Assignment 1
---

<div id="header">

| **CS 246 Assignment 1**
| due 12:55pm on Tuesday, January 24, 2017

</div>

[Link back to syllabus](http://cs.brynmawr.edu/cs246/syllabus.html)

[Click here to start assignment](https://classroom.github.com/group-assignment-invitations/5aadfd71d1342c5bafc4c92fece0abf2)

Like all assignments, you will complete this assignment via
GitHub. See [the submission instructions](../submission.html)
for how to get the starter code and how to submit this
assignment.

(If you end up with the assignment files in a `.zip` file,
you can say `unzip xxx.zip` to unzip it, where `xxx.zip`
is the name of your downloaded file. As always, make sure
you are in the right working directory. Use `ls` and `pwd`
to see where you are.)

Please complete these tasks in order. It's meant to be
easier that way. Also, ignore the possibility of bogus
input. For example, if your program is expecting a number
and the user types `bogus`, it's OK if your program crashes.

0. Sign up for a [GitHub](https://github.com/) account
   and fill out the [course survey](https://docs.google.com/forms/d/e/1FAIpQLSeQbZY4GfuUK_I_4TJpiiRPx-94d59mQKnJHvzQc0t_El5SKQ/viewform).

1. **Hello, world!**

    Edit the `hello.c` file (which contains only comments
    -- fill in the header here and in the other files below)
to implement a "Hello, world!" program. This program should
simply print `Hello, world!` on a line by itself and then
exit successfully.

    You will be able to compile your program with `gcc -o hello hello.c` and run it with `./hello`. (The `./` there says that the `hello`
    executable is in the same directory as you are.)

2. **Adding two numbers**

    Edit the `add2.c` file to write a program that asks the user
    for two numbers (just use `int`s, like everyone else always
    does) and then prints their sum. Here is an example session,
    with user-entered numbers in boldface:

    | `Enter a number:` **`4`**
    | `Enter a number:` **`7`**
    | `4 + 7 = 11`

    This program can be compiled with `gcc -o add2 add2.c` and run
    with `./add2`.

3. **Addings lots of numbers**

    Edit the `adds.c` file to write a program that adds many
    numbers together. It continues accepting numbers until the
    user enters a 0. (Who would need to add a 0, anyway?)
    It then prints the sum of the numbers. It does *not* need
    to repeat back the numbers entered. (That would require
    an array, and we haven't learned about them yet.)

    Here is an example session:

    | `Enter a number:` **`4`**
    | `Enter a number:` **`7`**
    | `Enter a number:` **`1`**
    | `Enter a number:` **`18`**
    | `Enter a number:` **`0`**
    | `Sum: 30`

4. **A calculator**

    Edit the `calc.c` file to write a very simple calculator
    program. It should ask the user for an operation, which
    is `+`, `-`, `*`, or `/`. After asking for the operation,
    the program then asks for 2 numbers. The program then
    prints out the operation applied to the two numbers.
    It loops until the user chooses 0 as the operation.

    You should read in the command as a `char`. This will
    make your life simpler.

    Here is an example session:

    | `Enter an operation:` **`-`**
    | `Enter a number:` **`6`**
    | `Enter a number:` **`2`**
    | `6 - 2 = 4`
    | `Enter an operation:` **`*`**
    | `Enter a number:` **`4`**
    | `Enter a number:` **`9`**
    | `4 * 9 = 36`
    | `Enter an operation:` **`/`**
    | `Enter a number:` **`10`**
    | `Enter a number:` **`4`**
    | `10 / 4 = 2`
    | `Enter an operation:` **`0`**
    | `Good-bye.`

    Note that your program should do integer division. If
    you store your numbers as `int`s, this should be the
    default behavior. (That is, integer division is the
    natural, easy interpretation of this task.)

    Your program should act appropriately (issue a sensible error and continue running) if the user types
    in the character for an operation that does not exist
    (for example, `'#'`) or tries to divide by 0. You are *not* expected to be able to handle when
    the user types a word instead of a number, however.

    *NB*: When you use `scanf("%d",...)`, you will read only the number that the user types in, *not*
    the newline after the number. So if you read a character later on, you'll read the newline by
    mistake. The solution is to put a space in the format string before the `%c`. As the first bullet
    on page 45 of our book explains, this space character instructs `scanf` to skip any whitespace,
    including a newline.

5. **Reflections**

    Edit `refl.txt` (short for "reflections") to answer
    the questions therein.

When you're all done, submit on GitHub by creating a Pull
Request according to [these instructions](../submission.html).
