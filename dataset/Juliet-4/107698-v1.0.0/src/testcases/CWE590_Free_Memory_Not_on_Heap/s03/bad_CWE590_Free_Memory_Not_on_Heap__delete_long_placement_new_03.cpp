namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(5==5)
    {
        {
            char buffer[sizeof(long)];
            long * dataBuffer = new(buffer) long;
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
