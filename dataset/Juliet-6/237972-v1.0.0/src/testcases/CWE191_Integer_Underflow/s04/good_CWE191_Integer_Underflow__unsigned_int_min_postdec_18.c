void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = 0;
    goto sink;
sink:
    if (data > 0)
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = -2;
    goto sink;
sink:
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
