#pragma warning(disable : 4996)
#include "Prim.h"
#include "Kruskall.h"
#include "Graph.h"

int main() {
	//-----------------------------------------Loading and Printing the Graph------------------------------
	graph* G;

	FILE* f;
	f = fopen("cost.txt", "r");
	G = loadGraph(f);

	printf("\n Edges and Costs: \n");

	for (int i = 0; i < G->noOfEdges; i++) {
		printf("[%d <-> %d] --- cost = %d \n", G->pEdge[i].source, G->pEdge[i].destination, G->pEdge[i].weight);
	}
	//------------------------------------------------END---------------------------------------------------
	//-----------------------------------------------PRIM---------------------------------------------------
	int n = 0, r = 0, k = 0;			//----|  Data for Prim's Alg
	// ce reprezinta???

	/* k = prim(V, Q, H, n, r, G);

	printf("\n Prim: \n");

	displayMST(H, n);

	printf("\n MST cost = %d \n", k); */
	//-----------------------------------------------END------------------------------------------------------
	//---------------------------------------------Kruskall---------------------------------------------------

	int p, m, L[20];										//----|  Data for Kruskall's Alg

	kruskal(n, m, L, G); 
	//-----------------------------------------------END-----------------------------------------------------
	system("pause");

}