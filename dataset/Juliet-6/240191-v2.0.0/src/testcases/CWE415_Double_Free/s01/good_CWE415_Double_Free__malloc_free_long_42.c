static long * FUN0(long * data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
static long * FUN2(long * data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
void FUN3()
{
    long * data;
    data = NULL;
    data = FUN2(data);
    ; 
}
