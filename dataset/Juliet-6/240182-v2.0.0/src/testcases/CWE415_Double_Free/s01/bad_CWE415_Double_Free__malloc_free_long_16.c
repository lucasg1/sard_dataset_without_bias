void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
