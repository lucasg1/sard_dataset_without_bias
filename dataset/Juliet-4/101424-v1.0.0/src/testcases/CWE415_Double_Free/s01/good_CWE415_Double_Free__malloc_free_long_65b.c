void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    funcPtr(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    void (*funcPtr) (long *) = FUN2;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    funcPtr(data);
}
void FUN0(long * data)
{
    free(data);
}
void FUN2(long * data)
{
    ; 
}
