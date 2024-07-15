void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    data = (unsigned int)RAND32();
    goto sink;
sink:
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
