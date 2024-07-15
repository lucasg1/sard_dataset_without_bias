void FUN0()
{
    int i,j;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printLongLine(data[0]);
<END>
    }
}
