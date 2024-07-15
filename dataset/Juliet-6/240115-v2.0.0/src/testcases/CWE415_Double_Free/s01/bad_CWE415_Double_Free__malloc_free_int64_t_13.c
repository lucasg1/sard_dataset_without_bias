void FUN0()
{
    int64_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
