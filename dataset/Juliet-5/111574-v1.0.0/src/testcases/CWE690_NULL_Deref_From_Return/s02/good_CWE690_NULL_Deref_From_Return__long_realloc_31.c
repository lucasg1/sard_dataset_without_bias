void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    {
        long * dataCopy = data;
        long * data = dataCopy;
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
