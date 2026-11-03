*This project has been created as part of the 42 curriculum by elquetau.*

# Libft

## Description

**Libft** est le premier projet du tronc commun de 42. Le but est d'écrire sa
propre bibliothèque C, `libft.a`, en recodant une partie des fonctions de la
bibliothèque standard du C (libc), ainsi que des fonctions utilitaires qui
n'existent pas dans la libc (manipulation de chaînes, affichage sur des file
descriptors, listes chaînées).

Cette bibliothèque sera réutilisée dans les projets suivants de 42, où la
plupart des fonctions standard sont interdites. La coder permet aussi de
comprendre comment fonctionnent vraiment ces fonctions de base : gestion de la
mémoire, pointeurs, chaînes de caractères, `malloc`/`free`, et cas particuliers
décrits dans les pages `man`.

> ✍️ **TODO (à écrire toi-même)** : 2-3 phrases personnelles — ce que tu as
> appris, ce qui t'a paru le plus difficile (ex : `ft_split`, `ft_memmove`...).

## Instructions

### Prérequis

- Un compilateur C (`cc`)
- `make`
- `ar` (utilisé pour créer la bibliothèque statique)

### Compilation

À la racine du dépôt :

```sh
make        # compile libft.a
make clean  # supprime les fichiers objets (.o)
make fclean # supprime les fichiers objets et libft.a
make re     # fclean puis all
```

Tous les fichiers sont compilés avec `-Wall -Wextra -Werror`.

### Utilisation

Inclure le header dans son code et lier la bibliothèque à la compilation :

```c
#include "libft.h"

int	main(void)
{
	char	*s;

	s = ft_strjoin("Bonjour, ", "le monde");
	ft_putendl_fd(s, 1);
	free(s);
	return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o programme
./programme
```

## Description de la bibliothèque

### Partie 1 — Fonctions de la libc

Même prototype et même comportement que les fonctions originales (voir `man`),
avec le préfixe `ft_`.

| Fonction | Description |
|---|---|
| `ft_isalpha` | Vérifie si le caractère est une lettre |
| `ft_isdigit` | Vérifie si le caractère est un chiffre (`0`–`9`) |
| `ft_isalnum` | Vérifie si le caractère est une lettre ou un chiffre |
| `ft_isascii` | Vérifie si la valeur est un caractère ASCII (0–127) |
| `ft_isprint` | Vérifie si le caractère est imprimable (espace compris) |
| `ft_strlen` | Renvoie la longueur d'une chaîne |
| `ft_memset` | Remplit une zone mémoire avec un octet donné |
| `ft_bzero` | Remplit une zone mémoire avec des zéros |
| `ft_memcpy` | Copie `n` octets de `src` vers `dest` (sans chevauchement) |
| `ft_memmove` | Copie `n` octets de `src` vers `dest`, gère le chevauchement des zones |
| `ft_strlcpy` | Copie une chaîne dans un buffer de taille donnée, toujours terminée par `\0` |
| `ft_strlcat` | Concatène une chaîne à un buffer de taille donnée, toujours terminée par `\0` |
| `ft_toupper` | Convertit une minuscule en majuscule |
| `ft_tolower` | Convertit une majuscule en minuscule |
| `ft_strchr` | Renvoie un pointeur sur la première occurrence d'un caractère dans une chaîne |
| `ft_strrchr` | Renvoie un pointeur sur la dernière occurrence d'un caractère dans une chaîne |
| `ft_strncmp` | Compare au plus `n` caractères de deux chaînes |
| `ft_memchr` | Cherche un octet dans les `n` premiers octets d'une zone mémoire |
| `ft_memcmp` | Compare les `n` premiers octets de deux zones mémoire |
| `ft_strnstr` | Cherche une sous-chaîne dans au plus `len` caractères d'une chaîne |
| `ft_atoi` | Convertit une chaîne en `int` |
| `ft_calloc` | Alloue de la mémoire initialisée à zéro pour un tableau |
| `ft_strdup` | Renvoie une copie allouée d'une chaîne |

### Partie 2 — Fonctions supplémentaires

| Fonction | Description |
|---|---|
| `ft_substr` | Renvoie une nouvelle sous-chaîne de `s`, à partir de `start`, de longueur max `len` |
| `ft_strjoin` | Renvoie une nouvelle chaîne : `s1` suivie de `s2` |
| `ft_strtrim` | Renvoie une copie de `s1` sans les caractères de `set` au début et à la fin |
| `ft_split` | Découpe `s` selon le séparateur `c` en un tableau de chaînes terminé par `NULL` |
| `ft_itoa` | Convertit un `int` en une chaîne allouée (gère les nombres négatifs) |
| `ft_strmapi` | Crée une nouvelle chaîne en appliquant `f(index, char)` à chaque caractère |
| `ft_striteri` | Applique `f(index, &char)` à chaque caractère, peut modifier la chaîne directement |
| `ft_putchar_fd` | Écrit un caractère sur un file descriptor |
| `ft_putstr_fd` | Écrit une chaîne sur un file descriptor |
| `ft_putendl_fd` | Écrit une chaîne suivie d'un retour à la ligne sur un file descriptor |
| `ft_putnbr_fd` | Écrit un entier sur un file descriptor |

### Partie 3 — Listes chaînées

La bibliothèque utilise la structure suivante, déclarée dans `libft.h` :

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Fonction | Description |
|---|---|
| `ft_lstnew` | Alloue un nouveau maillon avec le contenu donné, `next` vaut `NULL` |
| `ft_lstadd_front` | Ajoute un maillon au début de la liste |
| `ft_lstadd_back` | Ajoute un maillon à la fin de la liste |
| `ft_lstsize` | Compte le nombre de maillons de la liste |
| `ft_lstlast` | Renvoie le dernier maillon de la liste |
| `ft_lstdelone` | Libère le contenu d'un maillon avec `del`, puis libère le maillon |
| `ft_lstclear` | Libère un maillon et tous les suivants, puis met le pointeur de la liste à `NULL` |
| `ft_lstiter` | Applique `f` au contenu de chaque maillon |
| `ft_lstmap` | Crée une nouvelle liste en appliquant `f` au contenu de chaque maillon (utilise `del` en cas d'échec) |

## Ressources

- Les pages `man` des fonctions de la libc (`man 3 strlen`, `man 3 memmove`, ...)
- `man 3 strlcpy` / `strlcat` (libc BSD, `<bsd/string.h>`)
- [Le langage C — Kernighan & Ritchie](https://fr.wikipedia.org/wiki/The_C_Programming_Language)
- [cppreference — bibliothèque standard du C](https://fr.cppreference.com/w/c)
- [La Norme de 42](https://github.com/42School/norminette)

> ✍️ **TODO (à écrire toi-même)** : ajoute les ressources que TU as vraiment
> utilisées (vidéos, tutos, sites, aide de camarades comme jmassavi...).

### Utilisation de l'IA

- Ce README a été rédigé avec l'aide d'une IA (Claude), puis relu et complété
  par moi.

> ✍️ **TODO (à écrire toi-même)** : dis honnêtement si tu as utilisé l'IA pour
> autre chose (comprendre un concept, débugger, tester...) et pour **quelles
> fonctions / quelles parties**. Si tu ne l'as pas utilisée pour le code,
> écris-le clairement.
