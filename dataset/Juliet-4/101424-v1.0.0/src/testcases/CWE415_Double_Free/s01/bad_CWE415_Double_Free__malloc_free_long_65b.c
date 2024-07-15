void FUN0(long * data);
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    funcPtr(data);
}
void FUN0(long * data)
{
<START>
    free(data);
<END>
}
