# get_next_line

The `get_next_line` function is a project that aims to read a line from a file descriptor (such as a file or standard input) and return it without the newline character. This function is commonly used in C programming to read input from files or other input streams one line at a time.

This is the first complex function we had to implement so far.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Return Value](#return-value)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## About

The `get_next_line` function reads a line from a file descriptor until a newline character ('\n') is encountered, or the end of file (EOF) is reached. It then returns the line without the newline character, allowing the caller to process the input line by line. This function is particularly useful when working with large input files or when real-time processing of input is required.

## Features

- Reads input from a file descriptor one line at a time
- Handles multiple file descriptors simultaneously using the same function call
- Dynamically allocates memory to store the input line
- Supports reading from files, standard input, and other input streams

## Getting Started

### Prerequisites

- C compiler (e.g., gcc)
- Basic understanding of file I/O operations in C programming

### Installation

To use the `get_next_line` function: git clone git@github.com:Bussiereg/get_next_line.git

## Usage

The `get_next_line` function has the following prototype:

```c
int get_next_line(int fd, char **line);
