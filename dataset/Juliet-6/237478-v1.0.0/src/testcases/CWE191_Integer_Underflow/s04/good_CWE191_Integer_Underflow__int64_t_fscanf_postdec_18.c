void FUN0()
{
    int64_t data;
    data = 0LL;
    goto source;
source:
    fscanf (stdin, "%" SCNd64, &data);
    goto sink;
sink:
    if (data > LLONG_MIN)
    {
        data--;
        int64_t result = data;
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
    data = -2;
    goto sink;
sink:
    {
        data--;
        int64_t result = data;
        printLongLongLine(result);
    }
}
