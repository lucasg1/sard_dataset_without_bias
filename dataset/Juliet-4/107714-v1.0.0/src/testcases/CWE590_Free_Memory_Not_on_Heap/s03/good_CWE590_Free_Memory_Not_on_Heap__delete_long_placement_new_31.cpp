namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    {
        long * dataCopy = data;
        long * data = dataCopy;
        printLongLine(*data);
        delete data;
    }
}
} 
