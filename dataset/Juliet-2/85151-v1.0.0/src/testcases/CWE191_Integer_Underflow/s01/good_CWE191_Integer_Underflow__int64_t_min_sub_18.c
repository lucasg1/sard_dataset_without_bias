void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = LLONG_MIN;
    goto sink;
sink:
    if (data > LLONG_MIN)
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = -2;
    goto sink;
sink:
    {
        int64_t result = data - 1;
        printLongLongLine(result);
    }
}
