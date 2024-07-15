namespace NAMESPACE0
{
void FUN0(long * data)
{
    printLongLine(*data);
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
