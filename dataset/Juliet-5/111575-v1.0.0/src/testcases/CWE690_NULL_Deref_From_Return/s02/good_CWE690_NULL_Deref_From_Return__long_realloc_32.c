void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL; 
    {
        long * data = *dataPtr1;
        data = (long *)realloc(data, 1*sizeof(long));
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
