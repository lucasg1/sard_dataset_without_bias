void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = LLONG_MAX;
    goto sink;
sink:
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
void FUN1()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    {
        int64_t result = data + 1;
        printLongLongLine(result);
    }
}
