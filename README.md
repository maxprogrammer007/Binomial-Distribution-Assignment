# Binomial Distribution Program - Assignment Submission Repository

Welcome to the **Binomial Distribution Program** assignment submission repository! This repository is dedicated to hosting and managing the assignment submissions for the **Binomial Distribution Program** from students. Please read the guidelines below carefully to ensure that your submission is valid and complete.

## Table of Contents
1. [Objective](#objective)
2. [Assignment Requirements](#assignment-requirements)
3. [Submission Guidelines](#submission-guidelines)
4. [File Naming Convention](#file-naming-convention)
5. [Programming Language Suggestions](#programming-language-suggestions)
6. [How to Submit](#how-to-submit)
7. [Repository Structure](#repository-structure)

## Objective

The purpose of this assignment is to implement the **Binomial Distribution Program** using C/C++ to demonstrate your understanding of probability distributions and statistical programming. This assignment will evaluate your ability to apply theoretical concepts to practical implementation.

## Assignment Requirements

1. **Program Description:**
   - You are required to write a program that computes the **Binomial Distribution** for given inputs.
   - The program should take two inputs: the number of trials (`n`) and the probability of success (`p`).
   - You should compute the probability for all possible values of the random variable, from `0` to `n`, and display the result.

2. **Expected Output:**
   - The output should list the probability distribution for the number of successes, i.e., for each value from `0` to `n`.

3. **Mathematical Formula:**
   - The binomial probability mass function (PMF) is given by:
     \[
     P(X = k) = \binom{n}{k} p^k (1 - p)^{n-k}
     \]
     where:
     - \( n \) = number of trials
     - \( p \) = probability of success on a single trial
     - \( k \) = number of successes
     - \( \binom{n}{k} \) is the binomial coefficient calculated as \( \frac{n!}{k!(n-k)!} \)

## Submission Guidelines

In order to maintain consistency and ensure proper evaluation, please adhere to the following guidelines:

1. **Submission Deadline:**
   - All assignments must be submitted before the provided deadline.

2. **Individual Submissions:**
   - This is an individual assignment. Each student must submit their own solution.

3. **Valid Format:**
   - Only submissions with valid file names and formats will be considered. 
   - Files must be submitted in **C or C++** format (.c or .cpp extensions).

## File Naming Convention

All students are **required** to follow the naming convention for the submitted file. This will help in identifying each submission properly.

- **Format:** `Name_Class_RollNo_Branch.extension`
  - Example: `JohnDoe_Class10_12345_CSE.cpp`

### Explanation:
- **Name:** Your full name (use CamelCase, i.e., first letter of each name capitalized, no spaces).
- **Class:** Your current class/grade.
- **RollNo:** Your unique roll number provided by the institution.
- **Branch:** Your branch of study.
- **Extension:** The file extension based on the language used (either `.c` or `.cpp`).

Ensure that the file is named correctly, otherwise it may not be accepted.

## Programming Language Suggestions

While it is suggested to use **C or C++** to complete this assignment, you are free to use either language based on your preference:

1. **C Language:** Use `.c` as the file extension.
2. **C++ Language:** Use `.cpp` as the file extension.

Both languages are well-suited for mathematical and statistical problems like the binomial distribution, and they offer efficient libraries for handling such computations.

## How to Submit

1. **Fork the Repository:**
   - First, fork this repository to your own GitHub account.

2. **Clone the Repository:**
   - Clone the repository to your local machine using the following command:
     ```
     git clone https://github.com/YourUsername/Binomial-Distribution-Assignment.git
     ```

3. **Create a New Folder for Your Submission:**
   - Inside the repository, create a new folder using your **full name** as the folder name.
   - Place your assignment file inside this folder.

4. **Push Your Changes:**
   - After adding your file, commit the changes and push them to your forked repository.
     ```
     git add .
     git commit -m "Added submission for John Doe"
     git push origin main
     ```

5. **Create a Pull Request (PR):**
   - Once the file has been successfully uploaded, create a pull request to the main repository for review.

6. **Submission Review:**
   - Your submission will be reviewed, and any feedback will be provided through GitHub comments.

## Repository Structure

The repository structure should follow this format:
```
├── README.md
├── JohnDoe_Class10_12345_CSE.cpp
├── JaneSmith_Class10_12346_CSE.c
├── Submission-Guidelines.txt
...
```

- Each student will have their individual file listed in the root directory.

## Common Issues

- **Incorrect File Naming:** Ensure your file follows the naming convention exactly, including the use of CamelCase for your name.
- **Wrong File Extension:** Make sure your file is submitted in either `.c` or `.cpp` format.
- **Late Submissions:** No late submissions will be accepted unless prior approval has been granted.

