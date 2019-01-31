# Exercice xx

Ecrire un programme permettant d'encoder des `struct lieu` dans un fichier.

L'utilisateur devra pouvoir encoder les informations concernant un `lieu`
- Nom du lieu
- latitude en degré décimaux
- longitude en degré décimaux

Il faut vérifier que les données fournies répondent au format attendu.

Chaque lieu fourni par l'utilisateur doit être ajouté au fichier des `lieu`.

## Structures à utiliser

```c
//Structures utilisées
struct coordonnee_terrestre {
    float latitude;
    float longitude;
};

struct lieu {
    char nom[50];
    struct coordonnee_terrestre position;
};
```

## Partage des fichiers

Une fois le fichier rempli de `struct lieu`, il faut le déposer dans [ce dossier partagé](https://hepl-my.sharepoint.com/:f:/g/personal/cedric_thiernesse_hepl_be/Ep_GRf5AiHtJpqcdJtMF4D8BZs0lEWtQQvJrqZ-S3k9Xjg?e=BzCNAK) en respectant la nomenclature suivant : `groupe_nom_prenom.dea`.

**Exemple :** `2132_dupond_jean.dea`
