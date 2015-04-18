## Array

Array is a variable that represents a sequence of memory locations; each can store an item of data of the same data type.  For example, 6 temperature samples:

`double temperatures[6];`

This provides us with 6 storage locations:

```
temperatures[0]
temperatures[1]
temperatures[2]
temperatures[3]
temperatures[4]
temperatures[5]
```

Elements of this array are stored in one contiguous block of memory.

We can initialise our array like this:

`double temperatures[6] {23.0, 26.0, 29.0, 30.0, 31.0, 32.0}`

or

`double temperatures[6] {23.0, 22.0, 22.6}`

Last 3 locations will be `0.0` in this case.

or

`double temperatures[6] {}`

Everything will be `0.0` in this case.

## Loops

### for loops

