void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    fscanf (stdin, "%u", &data);
    goto sink;
sink:
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
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
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
