void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
<START>
    printLongLongLine(data[0]);
<END>
}
