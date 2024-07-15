static unsigned int FUN0(unsigned int data)
{
    data = (unsigned int)RAND32();
    return data;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
