namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 0LL;
    data = 2;
    {
        int64_t data = dataRef;
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 0LL;
    data = LLONG_MAX;
    {
        int64_t data = dataRef;
        if (data < LLONG_MAX)
        {
            int64_t result = data + 1;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
