# 🧩 Libft

![Libft](./libft.png)

**Libft** is the first project of the 42 curriculum — the goal is to recreate essential functions from the C standard library and build a personal foundation library to be reused in future projects.

---

## 📚 Description

This project involves re-implementing various standard library functions (`<ctype.h>`, `<string.h>`, `<stdlib.h>`, `<unistd.h>`, etc.) and a few additional helper functions.  
Using Makefile, you can compile this library.

---

## ⚙️ Compilation

To compile the library:

```bash
make
```

This will generate a **`libft.a`** static library file.

You can then link it with any project like this:

```bash
gcc main.c -L. -lft -I. -o app
```

### Other Makefile commands

| Command | Description |
|----------|-------------|
| `make` | Compiles the base library |
| `make bonus` | Compiles the additional linked list functions |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Rebuilds everything from scratch |

---

## 🧱 Project structure

```
libft/
├─ libft.h
├─ Makefile
├─ *.c
├─ README.md
└─ libft.png
```

---

## 🧠 Implemented functions

### Character checks  
`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`

### Character conversion  
`ft_toupper`, `ft_tolower`

### Memory  
`ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

### Strings  
`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`,  
`ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strnstr`

### Conversion & I/O  
`ft_atoi`, `ft_itoa`,  
`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus (linked list)  
`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`,  
`ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

> Adjust the list if your implementation differs.

---

## 🧾 License

This project is part of the 42 curriculum and intended for educational purposes.  
Feel free to check it but please, try to do it on your own. No copy paste.

---

*Made with ❤️  during the 42 Common Core Program 2025.*

