void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
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
