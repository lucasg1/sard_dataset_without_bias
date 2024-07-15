void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)malloc(sizeof(data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
<START>
    printLongLongLine(*data);
<END>
    free(data);
}
