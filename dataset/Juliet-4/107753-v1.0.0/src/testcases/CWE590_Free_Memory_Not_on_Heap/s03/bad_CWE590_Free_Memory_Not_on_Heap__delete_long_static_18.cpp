namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    goto source;
source:
    {
        static long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
