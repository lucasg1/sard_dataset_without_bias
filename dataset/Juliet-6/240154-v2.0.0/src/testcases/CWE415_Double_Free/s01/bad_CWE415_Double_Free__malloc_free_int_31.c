void FUN0()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
        free(data);
<END>
    }
}
