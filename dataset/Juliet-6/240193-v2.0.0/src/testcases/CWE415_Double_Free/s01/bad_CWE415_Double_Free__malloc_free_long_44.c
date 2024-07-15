void FUN0(long * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    void (*funcPtr) (long *) = FUN0;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    funcPtr(data);
}
