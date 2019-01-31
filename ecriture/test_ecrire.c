#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ecriture.h"



int main(void) {

    int ok=1;
	int n;
	FILE *fp=NULL;
	struct complex toWrite;
	struct complex r;

	toWrite.real=1.0;
	toWrite.img =2.0;
    n=save(toWrite);

	if(n!=1)
    {
        ok = ok && 0;
        printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test nbr struct ecrite'\n");
    }
    if(n==-1)
    {
        ok = ok && 0;
        printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test '\n");
    }

	fp=fopen("test_write.cpx","rb");
	if(fp==NULL)
	{
		ok = ok && 0;
        printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test ouverture fichier'\n");
	}
	else
	{
	   	n=fread(&r,sizeof(struct complex),1,fp);
		if(n==1 && r.real==toWrite.real && r.img==toWrite.img)
		{
			ok = ok && 1;
		}
		else
        {
            	ok = ok && 0;
                printf("TECHIO> message --channel \"TEST ERREUR\" 'Error function fail test nbr struct =%d c.real=%f real=%f c.img=%f img='\n",n,toWrite.real,r.real,toWrite.img,r.img);
        }
	}

	if(ok)
        printf("TECHIO> success true\n");
    else
		printf("TECHIO> success false\n");

    return 0;
}

