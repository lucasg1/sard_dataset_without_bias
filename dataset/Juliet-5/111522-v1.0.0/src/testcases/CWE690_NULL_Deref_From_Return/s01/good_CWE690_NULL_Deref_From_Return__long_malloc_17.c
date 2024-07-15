void FUN0()
{
    int k;
    long * data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
