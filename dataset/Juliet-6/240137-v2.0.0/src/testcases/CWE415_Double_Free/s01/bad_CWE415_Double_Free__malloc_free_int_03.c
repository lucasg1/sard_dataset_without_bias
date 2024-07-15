void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = (int *)malloc(100*sizeof(int));
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
