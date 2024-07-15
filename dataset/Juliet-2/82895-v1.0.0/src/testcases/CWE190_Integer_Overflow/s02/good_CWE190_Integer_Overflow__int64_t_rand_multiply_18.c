void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = (int64_t)RAND64();
    goto sink;
sink:
    if(data > 0) 
    {
        if (data < (LLONG_MAX/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
