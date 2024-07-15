void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
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
    if(1)
    {
<START>
        printLongLongLine(data[0]);
<END>
    }
}
