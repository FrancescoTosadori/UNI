//servono per i dati che possono assumere solo un numero limitato di valori; un numero enumerabile di valori.

//"nel dubbio prendiamo il seme"

#include <stdio.h>
/*
enum{
    const1,
    const2,
    const3,
}identificatore1, identificatore2, identificatore3;

//per i semi delle carte:
enum{cuori,quadri,fiori,picche}seme;
*/

//NB in realtà le costanti sono scritte maiuscole
typedef enum{
    CUORI, QUADRI, FIORI, PICCHE
}Seme;

int main(void){
    for(Seme i = CUORI; i <= PICCHE; i++)printf("%c",i);
    return 0;
}