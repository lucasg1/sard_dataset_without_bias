void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
