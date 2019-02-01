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

## `fclose`
Prototype : `int fclose(FILE *stream);`

## `fread`
Prototype : `size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);`

## `fwrite`
Prototype : `size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);`

## `fseek`
Prototype : `int fseek(FILE *stream, long int offset, int whence);`

## `ftell`
Prototype : `long int ftell(FILE *stream);`