void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)malloc(100*sizeof(int));
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
