# simpleCalculator

simpleCalculator is a C++ program for simple arithmetics.

By the way, this file is called `README.md`, and it is one of the expected files to find
in every non-trivial software project. In fact, in large projects with many directories,
it is a very helpful practice if you include such a README file in every major directory.
It is meant to give you a quick overview of what you will find the current directory,
how you can build and run the code, and similar first steps, without having to look deeper
into any additional documentation. And it is written in [Markdown](https://www.markdownguide.org/),
a simple markup language that is used everywhere.

## Building

Build from your terminal:

```shell
g++ -o simpleCalculator simpleCalculator.cpp
```

## Running

Run from your terminal using `./simpleCalculator`.

No command line arguments are expected.

After showing a menu, the program asks for:

1. One floating-point number to operate on
2. One operation
3. A second floating-point number to operate on, if the operation requires it.

## Example output

```shell
$ ./simpleCalculator 
Your Simple Calculator!
---------------------------
The Calculator Provides Following Functionalities: 
(1) Sum (+)
(2) Subtract (-)
(3) Multiply (*)
(4) Divide (/)
(5) Integer division (intdiv)
(6) Mean (mean)
(7) tan (tan)
(8) sin (sin)
(9) cos (cos)
(10) Square (square)
(11) Base conversion (base)
-------------------------------------
Enter the First Number: 2
Enter the Operation: +
Enter the Second Number: 3
Result = 5
-------------------------------------
```
