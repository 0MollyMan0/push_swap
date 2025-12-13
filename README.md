*This project has been created as part of the 42 curriculum by anfouger.*

# push_swap

## Description

**push_swap** is a 42 project whose goal is to sort a list of integers using two stacks (A and B) and a restricted set of operations. The program must output a sequence of operations that will sort the input stack in ascending order. The challenge is to design and implement an algorithm that minimizes the number of operations while respecting the project's constraints (allowed operations, input validation, and error handling).

This implementation uses a combination of **chunking** and **butterfly** strategies to handle different input sizes efficiently.

## Features

- Full implementation of allowed operations:
  - `sa`, `sb`, `ss`
  - `pa`, `pb`
  - `ra`, `rb`, `rr`
  - `rra`, `rrb`, `rrr`
- Sorting strategies:
  - **Chunking**: split the sequence into manageable chunks and push/pop elements chunk by chunk to reduce total operations.
  - **Butterfly**: optimized re-insertion approach to reduce movements for certain distributions of values.
- Robust input validation:
  - Detects non-numeric arguments, duplicates, and 32-bit integer overflow.
  - On invalid input prints `Error` and exits with a non-zero status.
- Designed with clarity and performance in mind (simple data structures, focused helper functions).

## Instructions

### Requirements

- A POSIX-compatible system (Linux / macOS).
- `gcc` (or a compatible C compiler).
- `make`.

### Compilation

A Makefile is provided. To build the project:

```bash
make
```

This will produce the executable:
push_swap


Common Makefile targets:

make — build the program.

make clean — remove object files.

make fclean — remove object files and the executable.

make re — fclean then make.

## Execution
Run push_swap with a series of integers as arguments:

```bash
./push_swap 3 2 5 1 4
```

The program prints a list of operations (one per line) which, when applied to the initial stack A, will result in a sorted stack.

Example output:
```bash
pb
sa
pa
ra
```
If the input is already sorted, the program prints nothing and exits with status 0.

On invalid input (duplicate values, non-integers, overflow, empty arguments), the program prints:

```bash
Error
```
and exits with a non-zero status.

## Algorithm & Technical choices

#### Data structures: 
doubly-linked lists or lightweight linked nodes to represent stacks A and B — chosen for O(1) push/pop and rotation operations.

```c
typedef struct t_stack
{
	struct t_node	*top;
	int				size;
}					t_stack;

typedef struct t_node
{
	struct t_node	*next;
	struct t_node	*prev;
	int				data;
	int				index;
}					t_node;
```

#### Chunking: 
input is partitioned into value ranges (chunks). Elements are pushed to B chunk by chunk, then reinserted into A in the correct order. Chunk size is tuned relative to input length to balance passes and operation count.

```c
typedef struct t_chunk
{
	struct t_chunk	*next;
	int				start;
	int				end;
	int				size;
	int				count;				
}					t_chunk;
```

#### Butterfly: 
used in combination with chunking during re-insertion to minimize rotations by inserting elements from both ends (like the wings of a butterfly), reducing total rotations and moves.

```
---------
------
---
-
----
-----
-------

```

#### Operation minimization: 
consecutive operations are simplified where possible (ex: combining rotations into rr, or cancelling opposite operations).

### Usage examples

#### Small example:

```bash
./push_swap 2 1 3
```
Output:

```bash
sa
```

#### Bigger example:

```bash
./push_swap 8 3 7 1 6 2 5 4
```

#### Possible output (example):

```bash
pb
pb
ra
sa
pa
pa
...
```
(Exact output depends on implementation details and chosen chunk/butterfly thresholds.)


## Resources

Below are resources used and recommended for understanding algorithms and data structures relevant to this project:

[Stack - Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))

[Stack sortable permutation - Wikipedia](https://en.wikipedia.org/wiki/Stack-sortable_permutation)

[Data Structures & Algorithms: A Beginner’s Guide to Stacks - Rebecca Ariss](https://rebeccaariss.medium.com/data-structures-algorithms-a-beginners-guide-to-stacks-3409d8928e1c)

[Sort stack using temporary stack - Shubham Gautam](https://www.enjoyalgorithms.com/blog/sort-stack-using-temporary-stack)

## AI usage statement

I used an AI to write this README and to perform preliminary research on resources I plan to consult. Concretely:

The AI helped draft and format this README file.

The AI performed searches and gathered resource suggestions to speed up my research (the AI searched on my behalf; I will consult those resources myself afterward).

No algorithm implementation code or final logic was produced by the AI — all sorting algorithm code (chunking + butterfly), validations, and optimizations were implemented manually by me.


## Testing & Validation

Test with ascending, descending, and random inputs.

Test edge cases: single value, two values, repeated values (should produce Error), non-numeric input (should produce Error), values at 32-bit boundaries.

Use the checker program (if available) to validate the operation sequence against the final stack state.



## Contributing / Notes

This repository follows the usual 42 project rules: code must compile, be documented, and pass the project's evaluators.

If you want a more detailed implementation README (code layout, modules, function lists, examples of optimizations and benchmarks), tell me which parts of the project you want documented and I’ll expand this file.

End of README


