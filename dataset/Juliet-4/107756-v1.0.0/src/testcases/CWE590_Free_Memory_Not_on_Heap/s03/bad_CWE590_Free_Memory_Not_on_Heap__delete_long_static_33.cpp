namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL; 
    {
        static long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    {
        long * data = dataRef;
        printLongLine(*data);
<START>
        delete data;
<END>
    }
}
} 
