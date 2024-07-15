namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    while(1)
    {
        {
            static long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
        break;
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
