void FUN0()
{
    unsigned int data;
    data = 0;
    goto source;
source:
    fscanf (stdin, "%u", &data);
    goto sink;
sink:
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
