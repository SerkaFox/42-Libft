# 📚 Libft

**Libft** es tu propia biblioteca estándar en lenguaje C, implementada desde cero. Este proyecto es parte obligatoria del plan de estudios de la escuela 42 y tiene como objetivo comprender a fondo la gestión de memoria, cadenas y estructuras de datos básicas en C.

## 📌 Descripción

Libft es un conjunto de funciones en C que replican o amplían la funcionalidad de la biblioteca estándar libc. Todas las funciones están escritas manualmente, sin usar implementaciones existentes.

## ✅ Contenido

La biblioteca incluye las siguientes categorías de funciones:

- **Funciones de manejo de memoria**  
  `memset`, `bzero`, `memcpy`, `memccpy`, `memmove`, `memchr`, `memcmp`, `calloc`

- **Funciones de manejo de cadenas**  
  `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`, `strdup`, `substr`, `strjoin`, `strtrim`, `split`, `itoa`

- **Funciones de manejo de caracteres**  
  `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`

- **Funciones de salida**  
  `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`

- **Funciones adicionales y listas enlazadas**  
  `lstnew`, `lstadd_front`, `lstsize`, `lstlast`, `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

## ⚙️ Instalación y uso

1️⃣ Clona el repositorio:

```bash
git clone https://github.com/SerkaFox/42-Libft.git
cd 42-Libft
```

2️⃣ Compila la biblioteca:

```bash
make
```

3️⃣ Incluye `libft.a` en tu proyecto:

```c
#include "libft.h"
```

Y enlaza con:

```bash
gcc tu_archivo.c libft.a
```

## 📂 Estructura del proyecto

```plaintext
.
├── libft.h         # Archivo de cabecera
├── Makefile        # Construcción de la biblioteca
├── *.c             # Implementación de funciones
├── README.md       # Descripción del proyecto
```

## 🎓 Lo que aprendí

✅ Manejo avanzado de punteros y memoria  
✅ Creación y manejo de listas enlazadas  
✅ Escritura de Makefile para automatizar la compilación  
✅ Cumplimiento estricto del estándar de codificación de 42

## 🗂️ Autor

> **SerkaFox** — estudiante de la escuela 42  
> [GitHub](https://github.com/SerkaFox)
