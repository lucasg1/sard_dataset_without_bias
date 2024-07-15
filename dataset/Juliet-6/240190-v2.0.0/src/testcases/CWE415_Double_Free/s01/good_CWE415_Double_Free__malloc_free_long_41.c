void FUN0(long * data)
{
    free(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
void FUN2(long * data)
{
    ; 
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN2(data);
}
