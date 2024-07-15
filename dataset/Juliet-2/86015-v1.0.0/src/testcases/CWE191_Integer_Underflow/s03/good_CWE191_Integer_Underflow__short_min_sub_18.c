void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    data = SHRT_MIN;
    goto sink;
sink:
    if (data > SHRT_MIN)
    {
        short result = data - 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN1()
{
    short data;
    data = 0;
    goto source;
source:
    data = -2;
    goto sink;
sink:
    {
        short result = data - 1;
        printIntLine(result);
    }
}
