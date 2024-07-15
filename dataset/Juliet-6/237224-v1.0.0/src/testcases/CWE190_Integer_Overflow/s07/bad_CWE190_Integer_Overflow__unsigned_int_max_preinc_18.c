void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = UINT_MAX;
    goto sink;
sink:
    {
<START>
        ++data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
