namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 5LL;
    printLongLongLine(data);
    {
        int64_t data = dataRef;
        data = 10LL;
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 5LL;
    {
        int64_t data = dataRef;
        printLongLongLine(data);
    }
}
} 
