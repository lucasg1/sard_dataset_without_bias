void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(globalTrue)
    {
        free(data);
    }
}
