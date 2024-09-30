// Fonction qui affiche un message d'erreur sur la sortie d'erreur (stderr)
 
// Fonction qui implémente la commande `cd` pour changer de répertoire
// Si le nombre d'arguments est incorrect, afficher une erreur
// Si le changement de répertoire échoue, afficher un message d'erreur avec le répertoire en question

// Fonction qui configure les redirections de pipe
// Si un pipe existe, dupliquer le bon descripteur de fichier dans l'entrée ou la sortie standard
// Fermer les descripteurs inutiles après duplication
// En cas d'erreur, afficher un message d'erreur fatal et quitter

// Fonction qui exécute une commande
// Vérifier si la commande est un pipe (`|`)
// Si la commande est `cd`, appeler la fonction `cd` et ne pas forker de processus
// Si un pipe est nécessaire, créer un pipe
// Créer un nouveau processus avec fork()
// Si le processus est l'enfant:
//  - Terminer la chaîne d'arguments pour la commande courante en la séparant des commandes suivantes
//  - Rediriger l'entrée ou la sortie via un pipe s'il existe
//  - Si la commande est `cd`, l'exécuter dans le processus enfant
//  - Sinon, utiliser execve pour exécuter la commande
//  - En cas d'échec d'exécution, afficher un message d'erreur
// Le processus parent attend la fin du processus enfant
// Après l'attente, rediriger à nouveau l'entrée ou la sortie si un pipe est présent

// Fonction `main` qui démarre le programme
// Parcourir les arguments de la ligne de commande
// À chaque point où une commande est terminée (via un `;` ou `|`), exécuter cette commande
// Répéter jusqu'à ce que toutes les commandes soient exécutées