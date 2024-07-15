void FUN0(unsigned int data)
{
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN0(data);
}
