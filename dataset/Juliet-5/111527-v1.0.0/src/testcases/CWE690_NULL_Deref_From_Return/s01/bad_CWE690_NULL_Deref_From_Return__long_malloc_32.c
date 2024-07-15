void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL; 
    {
        long * data = *dataPtr1;
        data = (long *)malloc(1*sizeof(long));
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
