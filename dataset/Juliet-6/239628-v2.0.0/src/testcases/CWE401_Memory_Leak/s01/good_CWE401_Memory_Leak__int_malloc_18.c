void FUN0()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    goto sink;
sink:
    ; 
}
