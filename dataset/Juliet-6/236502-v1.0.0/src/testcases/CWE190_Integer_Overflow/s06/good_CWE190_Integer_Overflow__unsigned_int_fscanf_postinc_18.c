void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    fscanf (stdin, "%u", &data);
    goto sink;
sink:
    if (data < UINT_MAX)
    {
        data++;
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
    data = 2;
    goto sink;
sink:
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
