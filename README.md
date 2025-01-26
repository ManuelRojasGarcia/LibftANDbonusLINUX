# LibftANDbonusLINUX

![Libft](https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg)

Este repositorio contiene una implementación de la biblioteca estándar de C personalizada. Se incluyen funciones esenciales para la manipulación de cadenas, memoria y listas enlazadas.

---

## 📂 Contenido del repositorio

### 🗂️ Archivos principales:
- **📄 libft.h**: Archivo de cabecera que contiene las declaraciones de funciones.
- **⚙️ Makefile**: Script para compilar la biblioteca.

### 🛠️ Funciones incluidas:

#### 📝 Funciones de manipulación de cadenas:
- `ft_strlen`: Calcula la longitud de una cadena.
- `ft_strlcpy`: Copia una cadena con seguridad.
- `ft_strlcat`: Concatena cadenas con un tamaño límite.
- `ft_strdup`: Duplica una cadena.

#### 💾 Funciones de manipulación de memoria:
- `ft_memset`: Rellena un bloque de memoria con un valor.
- `ft_memcpy`: Copia datos entre bloques de memoria.
- `ft_memmove`: Mueve datos entre bloques de memoria.

#### 🔄 Funciones de conversión:
- `ft_atoi`: Convierte una cadena a entero.
- `ft_itoa`: Convierte un entero a cadena.

#### 🔗 Funciones de listas enlazadas (bonus):
- `ft_lstnew`: Crea un nuevo nodo de lista.
- `ft_lstadd_front`: Agrega un nodo al inicio de la lista.
- `ft_lstadd_back`: Agrega un nodo al final de la lista.

---

## ⚙️ Compilación

Para compilar la biblioteca, ejecutar el siguiente comando en la terminal:

```sh
make
```

Esto generará un archivo `libft.a` que podrá ser enlazado en otros proyectos.

---

## 🚀 Uso

Para utilizar la biblioteca en tu proyecto, incluye el encabezado y enlaza la librería:

```c
#include "libft.h"
```

Compilar tu proyecto junto con la librería:

```sh
gcc main.c -L. -lft -o my_program
```

---

## 📧 Contacto

Autor: **Manuel Rojas Garcia**  
Repositorio: [LibftANDbonusLINUX](https://github.com/ManuelRojasGarcia/LibftANDbonusLINUX)

---


