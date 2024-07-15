void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    {
        long * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
<START>
        printLongLine(*data);
<END>
    }
}
