static int * VAR0;
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int * data = VAR2;
    free(data);
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    VAR2 = data;
    FUN2();
}
