/*
programme: exercice-1.5.c
auteur: Bertrand Timothé
date: 09/09/2019
finalité: Donner le prix qu'un client devra payer pour un nombre de nuits
		et de petits dejeuners défini par l'opérateur.
*/

#include <stdio.h>

int main() {
	calculerPrix();
}

/*
	nom: calculerPrix
	finalité: Donner le prix qu'un client devra payer pour
			  un nombre de nuits et de petits dejeuners défini par l'opérateur.
	variables: 
		nbNuit			Nombre de nuits qu a dormi le client
		nbDejeuner		Nombre de dejeuners qu a pris le client
		totalNuit		Prix pour le nombre de nuits ( 1 nuit = 50€ )
		totalDejeuner	Prix pour le nombre de dejeuners ( 1 dejeuner = 5€ )
		totalSansTva	Prix total sans la tva de 19.6%
		tva				Montant de la tva de 19.6% tu le prix total

*/
void calculerPrix()
{
	float nbNuit, nbDejeuner, totalNuit, totalDejeuner, totalSansTva, tva;

	printf("Nombre de nuits: \n");
	scanf("%f", &nbNuit);

	printf("Nombre de dejeuners: \n");
	scanf("%f", &nbDejeuner);

	totalNuit = nbNuit * 50; // Calcul du montant des nuits ( 1 nuit correspond a 50€ )
	totalDejeuner = nbDejeuner * 5; // Calcul du montant des dejeuners ( 1 dejeuner correspond a 50€ )
	totalSansTva = totalNuit + totalDejeuner; // Calcul du total
	tva = totalSansTva * 0.196; // Calcul de la valeur de la taxe a 19.6%

	printf("Montant TTC pour la chambre: %.2f\n", totalNuit);
	printf("Montant TTC pour les petits dejeuners: %.2f\n", totalDejeuner);
	printf("Total a payer: %.2f\n", totalSansTva);
	printf("Montant de la TVA (19.6%%1): %.2f\n", tva);
}
