# 📚 libft

## school 21 (42) libft project

<img src="./image.jpg" width=%80 height=%80>

My first project at School 21.

Цель проекта - реализация функций стандартной библиотеки Си.
Описание функций представлено по следующей ссылке:
https://microelectronics.dev/eboris/libft/wiki/Описание-функций?lang=ru-RU

#### Для компиляции основной части проекта необходимо запустить команду <br>
#### ```make all```  <br> 

#### Для компиляции бонусной части проекта необходимо запустить команду <br>
#### ```make bonus```  <br>

## 0️⃣ Libc functions

В этой первой части вы должны перекодировать набор функций libc, как определено в их man.
Ваши функции должны будут представлять тот же прототип и поведение, что и исходные.
Имена ваших функций должны иметь префикс ft_. 

* [ft_memset](/ft_memset.c)
* [ft_bzero](/ft_bzero.c)
* [ft_memcpy](/ft_memcpy.c)
* [ft_memccpy](/ft_memccpy.c)
* [ft_memmove](/ft_memmove.c)
* [ft_memchr](/ft_memchr.c)
* [ft_memcmp](/ft_memcmp.c)
* [ft_strlen](/ft_strlen.c)
* [ft_strdup](/ft_strdup.c)
* [ft_strlcpy](/ft_strlcpy.c)
* [ft_strlcat](/ft_strlcat.c)
* [ft_strchr](/ft_strchr.c)
* [ft_strrchr](/ft_strrchr.c)
* [ft_strnstr](/ft_strnstr.c)
* [ft_strncmp](/ft_strncmp.c)
* [ft_atoi](//ft_atoi.c)
* [ft_isalpha](/ft_isalpha.c)
* [ft_isdigit](/ft_isdigit.c)
* [ft_isalnum](/ft_isalnum.c)
* [ft_isascii](/ft_isascii.c)
* [ft_isprint](/ft_isprint.c)
* [ft_toupper](/ft_toupper.c)
* [ft_tolower](/ft_tolower.c)
* [ft_calloc](/ft_calloc.c)
* [ft_strdup](/ft_strdup.c)

## 1️⃣ Additional functions
Во второй части вы должны закодировать набор функций, которые либо не включены в `libc`, либо включены в другую форму.
Подробнее [en.subject.pdf](/en.subject.pdf)

* [ft_substr](/ft_substr.c)
* [ft_strjoin](/ft_strjoin.c)
* [ft_strtrim](/ft_strtrim.c)
* [ft_split](/ft_split.c)
* [ft_itoa](/ft_itoa.c)
* [ft_strmapi](/ft_strmapi.c)
* [ft_putchar_fd](/ft_putchar_fd.c)
* [ft_putstr_fd](/ft_putstr_fd.c)
* [ft_putendl_fd](/ft_putendl_fd.c)
* [ft_putnbr_fd](/ft_putnbr_fd.c)

## 2️⃣ List functions (bonus part)

### Функции для работы с односвязным списком

Вы будете использовать следующую структуру для представления элементов вашего списка.

```
typedef struct  s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;
```

Вот описание полей структуры `t_list`:

- `content`: содержит адрес данных. `void *` позволяет хранить адреса любых данных.
- `next`: содержит адрес следующего элемента списка связаных между собой структур или `NULL`, если это последний элемент.</br>
  </br>
* [ft_lstnew](/ft_lstnew.c)
* [ft_lstdelone](/ft_lstdelone.c)
* [ft_lstdel](/ft_lstdel.c)
* [ft_lstadd](/ft_lstadd.c)
* [ft_lstiter](/ft_lstiter.c)
* [ft_lstmap](/ft_lstmap.c)
