void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
void FUN0(int * data)
{
    ; 
}
void FUN2(int * data)
{
    free(data);
}
