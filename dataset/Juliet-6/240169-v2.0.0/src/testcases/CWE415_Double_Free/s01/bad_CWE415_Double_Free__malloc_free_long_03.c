void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(5==5)
    {
        free(data);
    }
}
