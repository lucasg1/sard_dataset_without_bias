void FUN0()
{
    int i,j;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printLongLongLine(data[0]);
<END>
    }
}
