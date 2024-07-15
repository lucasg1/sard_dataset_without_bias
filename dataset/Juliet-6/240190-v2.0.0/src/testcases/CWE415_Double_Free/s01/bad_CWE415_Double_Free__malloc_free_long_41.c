void FUN0(long * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN0(data);
}
