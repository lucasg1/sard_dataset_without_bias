void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    FUN0(data);
}
void FUN0(long * data)
{
<START>
    free(data);
<END>
}
