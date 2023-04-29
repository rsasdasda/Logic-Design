struct KmapSolution {
int numVar;
char **kmap;
char **primes;
int primesSize;
char **essentials;
int essentialsSize;
char **minimumSop;
int minimumSopSize;
};
struct KmapSolution *solveKmap(
int numVar, int *minterms, int mintermsSize,
int *dontcares, int dontcaresSize)
{
struct KmapSolution sol = malloc(sizeof(KmapSolution));
// implement your solution here
return sol;
}

void printKmapSolution(struct KmapSolution *sol)
{
int nRow, nCol;
switch (sol->numVar) {
case 2:
nRow = 2; nCol = 2;
break;
case 3:
nRow = 2; nCol = 4;
break;
case 4:
nRow = 4; nCol = 4;
break;
}
printf("K-map:\n");
for (int i = 0; i < nRow; ++i) {for (int j = 0; j < nCol; ++j)
printf("%c ", sol->kmap[i][j]);
printf("\n");
}
printf("Prime implicants: ");
for (int i = 0; i < sol->primesSize; ++i) {
printf("%s", sol->primes[i]);
if (i != sol->primesSize - 1) printf(", ");
}
printf("\n");
printf("Essential prime implicants: ");
for (int i = 0; i < sol->essentialsSize; ++i) {
printf("%s", sol->essentials[i]);
if (i != sol->essentialsSize - 1) printf(", ");
}
printf("\n");
printf("Minimum SOP: ");
for (int i = 0; i < sol->minimumSopSize; ++i) {
printf("%s", sol->minimumSop[i]);
if (i != sol->minimumSopSize - 1) printf(" + ");
}
printf("\n");
}
