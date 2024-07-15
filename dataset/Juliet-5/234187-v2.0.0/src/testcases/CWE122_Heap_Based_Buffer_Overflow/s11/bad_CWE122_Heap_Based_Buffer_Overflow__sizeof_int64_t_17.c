void FUN0()
{
    int i;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
