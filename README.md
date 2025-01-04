# Tower of Hanoi Solver

## Aim
To solve the Tower of Hanoi problem using recursion and provide a visual output for each step of the solution.

---

## Problem Description
The Tower of Hanoi is a classic problem where you need to move `n` disks from a source rod to a target rod, following these rules:
1. Only one disk can be moved at a time.
2. A larger disk cannot be placed on top of a smaller disk.
3. Use an auxiliary rod for intermediate steps.

---

## Algorithm

### Tower of Hanoi
1. Move the top `n-1` disks from the source rod to the auxiliary rod.
2. Move the `nth` disk from the source rod to the target rod.
3. Move the `n-1` disks from the auxiliary rod to the target rod using the source rod as an auxiliary.

---

## Sample Run
```
Enter the number of disks: 5

Steps to solve Tower of Hanoi with 5 disks:
Step 1: Move disk 1 from A to C
Step 2: Move disk 2 from A to B
Step 3: Move disk 1 from C to B
Step 4: Move disk 3 from A to C
Step 5: Move disk 1 from B to A
Step 6: Move disk 2 from B to C
Step 7: Move disk 1 from A to C
Step 8: Move disk 4 from A to B
Step 9: Move disk 1 from C to B
Step 10: Move disk 2 from C to A
Step 11: Move disk 1 from B to A
Step 12: Move disk 3 from C to B
Step 13: Move disk 1 from A to C
Step 14: Move disk 2 from A to B
Step 15: Move disk 1 from C to B
Step 16: Move disk 5 from A to C
Step 17: Move disk 1 from B to A
Step 18: Move disk 2 from B to C
Step 19: Move disk 1 from A to C
Step 20: Move disk 3 from B to A
Step 21: Move disk 1 from C to B
Step 22: Move disk 2 from C to A
Step 23: Move disk 1 from B to A
Step 24: Move disk 4 from B to C
Step 25: Move disk 1 from A to C
Step 26: Move disk 2 from A to B
Step 27: Move disk 1 from C to B
Step 28: Move disk 3 from A to C
Step 29: Move disk 1 from B to A
Step 30: Move disk 2 from B to C
Step 31: Move disk 1 from A to C

Total steps: 31
```
