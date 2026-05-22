# Project Description – Circlet

## Introduction

This project is developed in C language and is based on pattern printing programs using nested loops and conditional statements. Different types of number and star patterns are created to improve logical thinking and understanding of loops in C programming.

---

# Objectives of the Project

* To learn nested loops in C language.
* To understand pattern printing logic.
* To improve coding and logical skills.
* To practice conditions and formatting in C.

---

# Concepts Used

* `for` loop
* Nested loops
* `if-else` conditions
* Pattern printing
* Space formatting
* Increment and decrement operators

---

# Programs Included in the Project

## 1. Right Half Angle Pattern

Prints numbers in increasing triangle form.

Example:

```text id="v0o0lv"
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
```

Logic:

* Outer loop controls rows.
* Inner loop prints numbers up to current row.

---

## 2. Floyd’s Triangle Pattern

Prints continuous numbers in triangle form.

Example:

```text id="vq5hgl"
11
12 13
14 15 16
17 18 19 20
```

Logic:

* Variable `n` stores starting number.
* `n++` increases number automatically.

---

## 3. Left Half Angle Pattern

Prints left-aligned triangle using spaces and numbers.

Example:

```text id="2mkr6e"
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
```

Logic:

* First loop prints spaces.
* Second loop prints numbers.

---

## 4. Inverted Left Half Angle Pattern

Prints alternating `1` and `0` in inverted form.

Example:

```text id="g98k4g"
1 0 1 0 1
   1 0 1 0
      1 0 1
         1 0
            1
```

Logic:

* Outer loop controls decreasing rows.
* `if-else` checks odd/even positions.

---

## 5. Full Pyramid Pattern

Prints symmetric number pyramid.

Example:

```text id="cz5iqa"
        5
      4 5 4
    3 4 5 4 3
  2 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
```

Logic:

* First loop prints spaces.
* Second loop prints increasing numbers.
* Third loop prints decreasing numbers.

---

## 6. Custom Numeric Pyramid Pattern

Prints mirror-style numeric pattern.

Example:

```text id="hfdp6d"
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
```

Logic:

* Left side prints increasing numbers.
* Right side prints decreasing numbers.
* Middle loop manages spaces.

---

## 7. Custom Alphabetic Pattern

Prints custom star pattern.

Example:

```text id="9s7t6j"
* * * * *
*       *
*       *
* * * * *
*
*
*
```

Logic:

* `if(i==1 || i==4)` prints full star lines.
* `else if(i==2 || i==3)` prints stars on both sides.
* Remaining rows print single star.

---

# Conclusion

This project helped in understanding nested loops, conditions, and pattern printing techniques in C language. It improved logical thinking and programming skills through different number and star patterns.



