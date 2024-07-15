void FUN0()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        free(data);
<END>
    }
}
