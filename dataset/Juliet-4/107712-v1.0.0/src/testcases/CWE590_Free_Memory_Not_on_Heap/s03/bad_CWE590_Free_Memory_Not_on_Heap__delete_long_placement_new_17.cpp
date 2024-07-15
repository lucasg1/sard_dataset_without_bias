namespace NAMESPACE0
{
void FUN0()
{
    int i;
    long * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
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
