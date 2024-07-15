void FUN0(int * data)
{
    free(data);
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
void FUN2(int * data)
{
    ; 
}
void FUN3()
{
    int * data;
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    funcPtr(data);
}
