void FUN0()
{
    long * data;
    data = NULL; 
    data = (long *)calloc(1, sizeof(long));
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
