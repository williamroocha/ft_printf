# ft_printf

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/license/mit/)
![Project Status](https://img.shields.io/badge/status-complete-brightgreen.svg)

## Description

ft_printf is a project of the <a href="https://42lisboa.com/" target="_blank" rel="noopener noreferrer">42 Lisboa</a> software engineering program. The goal of this project is to recode the standard C library printf function.

## Table of Contents

- [Usage](#usage)
- [Installation](#installation)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Usage

To use the ft_printf function, include the `ft_printf.h` header in your C source file:

```c
#include "ft_printf.h"
```

Then, you can call the ft_printf function with format specifiers similar to the standard printf function:

```c
ft_printf("Hello, %s!\n", "world");
```

## Installation

To use this ft_printf library in your project, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/williamroocha/ft_printf.git
```

2. Copy the libftprintf.a library and the ft_printf.h header into your project's directory.

3. Include the ft_printf.h header in your C source file:
    
```c
#include "ft_printf.h"
```

4. Compile your project with the library:

```bash
cc -I./your-includes-directory -L./your-lib-directory -lftprintf main.c -o your_executable
```
replace `your-includes-directory` and `your-lib-directory` with the directories where you copied the ft_printf.h header and the libftprintf.a library, respectively.

## Examples

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("The answer is %d.\n", 42);
    return 0;
}
```

## Contributing
Contributions to this project are welcome! If you find any issues or want to add new features or improvements, please open a pull request or an issue.

## License
This project is licensed under the terms of the [MIT license](https://opensource.org/license/mit/)