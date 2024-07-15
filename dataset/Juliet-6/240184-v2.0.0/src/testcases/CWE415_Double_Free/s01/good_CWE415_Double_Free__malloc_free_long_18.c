void FUN0()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    goto sink;
sink:
    free(data);
}
