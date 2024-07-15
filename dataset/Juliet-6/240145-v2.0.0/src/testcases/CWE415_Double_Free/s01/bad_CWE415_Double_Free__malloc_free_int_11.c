void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
