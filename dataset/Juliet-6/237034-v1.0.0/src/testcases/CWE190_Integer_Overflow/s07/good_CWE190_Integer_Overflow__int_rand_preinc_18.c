void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    data = RAND32();
    goto sink;
sink:
    if (data < INT_MAX)
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN1()
{
    int data;
    data = 0;
    goto source;
source:
    data = 2;
    goto sink;
sink:
    {
        ++data;
        int result = data;
        printIntLine(result);
    }
}
