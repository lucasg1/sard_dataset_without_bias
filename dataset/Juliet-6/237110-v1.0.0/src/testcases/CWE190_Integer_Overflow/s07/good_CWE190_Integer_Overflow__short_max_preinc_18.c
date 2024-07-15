void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MAX;
    goto sink;
sink:
    if (data < SHRT_MAX)
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN1()
{
    short data;
    data = 0;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    {
        ++data;
        short result = data;
        printIntLine(result);
    }
}
