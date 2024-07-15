void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = (short)RAND32();
    goto sink;
sink:
    if (data < SHRT_MAX)
    {
        short result = data + 1;
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
        short result = data + 1;
        printIntLine(result);
    }
}
