namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL; 
    {
        long * data = *dataPtr1;
        {
            long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        printLongLine(*data);
<START>
        delete data;
<END>
    }
}
} 
