void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    FUN2(data);
}
void FUN0(long * data)
{
    free(data);
}
void FUN2(long * data)
{
    ; 
}
