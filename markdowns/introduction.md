# Introduction

Un fichier informatique est au sens commun, une collection, un ensemble de données numériques réunies sous un même nom, enregistrées sur un support de stockage permanent.

Les principales fonctions permettant de manipuler les fichiers sont : 
- `fopen`
- `fclose`
- `fread`
- `fwrite`
- `fseek`
- `ftell`

## `fopen`
Prototype : `FILE *fopen(const char *filename, const char *mode);`

`fopen` ouvre le fichier dont le nom est spécifié dans le paramètre `filename` dans un des modes suivants :
- `r` : lecture 
- `w` : écriture (écrase le contenu du fichier)
- `a` : écriture (ajoute à la fin des données existantes)
- `r+` : lecture/écriture à la position du pointeur
- `w+` : lecture/écriture à la position du pointeur (écrase le contenu du fichier)
- `a+` : lecture à la position du pointeur / écriture à la fin du fichier

## `fclose`
Prototype : `int fclose(FILE *stream);`

`fclose` ferme le fichier associé au pointeur de fichier `stream`.

## `fread`
Prototype : `size_t fread(void *ptr, size_t size, size_t count, FILE *stream);`

`fread` lit un tableau de données de `count` éléments, chacun ayant une taille de `size`, depuis le pointeur de fichier `stream` et les stocke à l'adresse `ptr`. `ptr` doit être du même type que les données lues.

La fonction retourne le nombre total d'élément qui ont été lus.

## `fwrite`
Prototype : `size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);`

`fwrite` écrit un tableau de données de `count` éléments, chacun ayant une taille de `size`, depuis l'adresse `ptr` et les stocke à la position courante du pointeur de fichier `stream`. 

La fonction retourne le nombre total d'élément qui ont été écris.

## `fseek`
Prototype : `int fseek(FILE *stream, long int offset, int origin);`

`fseek` positionne le pointeur de fichier `stream` à la position indiquée. La nouvelle position est un décalage de `offset` octets à partir de `origin`.

Le paramètre `origin` peut prendre les valeurs suivantes :
- `SEEK_SET` : le début du fichier
- `SEEK_CUR` : la position courante du pointeur
- `SEEK_END` : la fin du fichier

## `ftell`
Prototype : `long int ftell(FILE *stream);`

`ftell` retourne la position courante (en octets) du pointeur de fichier `stream`.