void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN0(long * data)
{
    FUN2(data);
}
void FUN1(long * data);
void FUN5()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    FUN1(data);
}
void FUN2(long * data)
{
<START>
    free(data);
<END>
}
