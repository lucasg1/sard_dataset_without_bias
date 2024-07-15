namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    goto source;
source:
    {
        long * dataBuffer = new long;
        *dataBuffer = 5L;
        data = dataBuffer;
    }
    printLongLine(*data);
    delete data;
}
} 
