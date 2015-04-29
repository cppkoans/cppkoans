# Pointers and References

## Pointer?

* A pointer is a variable that can store an address
* A pointer can tell us "where-is" a variable/function and "what-is" in the variable/function ("what-is": both the value and the type)
* Golden rule: always initialize a pointer when we define it
    * This can be done `long* pnumber {}`, but don't.
    * Do this `long* pnumber {nullptr}`, which is to initialize our pnumber pointer with a null pointer.
    * Note that `nullptr` has a type, `std::nullptr_t` that is defined in the cstddef header. This becomes important in function overloading.
* The * can be placed next to the type or to the pointer name, i.e. both `long* pnumber` and `long *pnumber` are okay.  But, we normally use the `long* pnumber` notation because it expresses the type "pointer to long" more clearly.
* It is common convention to use variable names beginning with `p` for pointers.  This makes it easier to see which variables in a program are pointers.
* We can define pointers to any type, including types that we define.  In practice, most of our use of pointers will be with class types that we define.

## Address-Of operator `&`

* The `address-of` operator is a unary operator that obtains the address of a variable. For instance, we can define a variable called `number` and then use our `address-of` operator to retrieve the address and initialize it with another pointer variable called `pnumber`

```
long number {12345L};
long* pnumber {&number};
```

We can do this as well:

```
long height {1454L};
pnumber = &height;  // pnumber will implicitly have type long*
```

## Indirection operator `*` (also known as the dereference operator)

* Applying `*` to a pointer accesses the contents of the memory location to which it points.

## So why do we use pointers?

Taking the address of a variable we already know about and sticking it in a pointer so that we can dereference it later seems like unnecessary work!

Here's why:

* We can use the pointer notation to operate on data stored in an array, which executes faster than if we just use array notation
* When we define our own functions, pointers are used extensively to enable a function to access large blocks of data, such as arrays, that are defined outside the function.
* We can allocate memory for new variables dynamically during program run-time.  This allows our program to adjust its use of memory depending on input.  When we allocate memory in C/C++, the memory is identified by its address so we need a pointer to record it.
* Pointers are the fundamental building blocks for polymorphism
