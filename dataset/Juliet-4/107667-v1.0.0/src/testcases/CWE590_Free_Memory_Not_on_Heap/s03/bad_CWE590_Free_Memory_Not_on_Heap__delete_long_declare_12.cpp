namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        {
            long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
    }
    else
    {
        {
            long * dataBuffer = new long;
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
