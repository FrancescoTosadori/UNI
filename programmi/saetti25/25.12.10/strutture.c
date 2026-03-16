typedef struct {
    int v[10];
}Vett;

//azzeriamo vett tramite un passaggi per riferimento
void azzera(Vett *pv/*variabile v della funz. principale*/){
    int i;
    for (i = 0; i < 10; i++){
        (*pv).v[i] = 0;
    }
}

int main(void){
    Vett v;
    azzera (&v);

}