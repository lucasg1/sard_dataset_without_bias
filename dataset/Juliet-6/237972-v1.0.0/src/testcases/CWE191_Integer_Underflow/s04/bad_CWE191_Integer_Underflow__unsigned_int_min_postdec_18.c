void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = 0;
    goto sink;
sink:
    {
<START>
        data--;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
