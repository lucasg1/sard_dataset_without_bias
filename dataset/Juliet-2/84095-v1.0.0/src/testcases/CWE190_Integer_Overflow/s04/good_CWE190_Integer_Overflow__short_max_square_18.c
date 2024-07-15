void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MAX;
    goto sink;
sink:
    if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
    {
        short result = data * data;
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
        short result = data * data;
        printIntLine(result);
    }
}
