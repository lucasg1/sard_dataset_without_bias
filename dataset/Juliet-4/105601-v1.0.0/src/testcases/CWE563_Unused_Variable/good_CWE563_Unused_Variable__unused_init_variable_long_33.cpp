namespace NAMESPACE0
{
void FUN0()
{
    long data;
    long &dataRef = data;
    data = 5L;
    {
        long data = dataRef;
        printLongLine(data);
    }
}
} 
