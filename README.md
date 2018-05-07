# c-static-and-union

Simple example of `static` functions and `unions`.

* Static functions are only accessible from the current compilation unit,
* Unions are structures in which one every attribute refers to the same
memory location, the union size is equal to the bigger attribute type size.

## Compile the example

```
gcc -c first.c -o first.o
gcc -c main.c -o main.o
gcc first.o main.o -o test
./test
```
