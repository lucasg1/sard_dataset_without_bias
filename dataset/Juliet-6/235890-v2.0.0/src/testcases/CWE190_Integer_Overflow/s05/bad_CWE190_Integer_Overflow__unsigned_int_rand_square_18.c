void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = (unsigned int)RAND32();
    goto sink;
sink:
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
