void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)malloc(50*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        int64_t source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int64_t));
<END>
        printLongLongLine(data[0]);
        free(data);
    }
}
