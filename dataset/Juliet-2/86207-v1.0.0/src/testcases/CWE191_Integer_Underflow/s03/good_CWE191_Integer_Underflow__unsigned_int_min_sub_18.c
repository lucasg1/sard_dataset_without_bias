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
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
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
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
