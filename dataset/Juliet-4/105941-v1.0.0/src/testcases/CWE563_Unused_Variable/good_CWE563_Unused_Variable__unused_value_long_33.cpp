namespace NAMESPACE0
{
void FUN0()
{
    long data;
    long &dataRef = data;
    data = 5L;
    printLongLine(data);
    {
        long data = dataRef;
        data = 10L;
        printLongLine(data);
    }
}
void FUN1()
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
