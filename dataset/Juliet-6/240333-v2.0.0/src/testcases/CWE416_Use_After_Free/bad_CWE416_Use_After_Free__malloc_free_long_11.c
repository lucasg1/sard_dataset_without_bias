void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
<START>
        printLongLine(data[0]);
<END>
    }
}
