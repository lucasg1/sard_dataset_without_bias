void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int64_t *)malloc(50*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
