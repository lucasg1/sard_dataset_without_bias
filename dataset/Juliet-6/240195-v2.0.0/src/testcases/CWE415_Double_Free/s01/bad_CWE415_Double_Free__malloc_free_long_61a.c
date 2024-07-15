long * FUN0(long * data)
{
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
long * FUN0(long * data);
void FUN2()
{
    long * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
