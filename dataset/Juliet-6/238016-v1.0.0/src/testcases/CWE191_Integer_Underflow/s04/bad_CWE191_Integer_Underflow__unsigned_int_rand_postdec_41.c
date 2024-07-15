void FUN0(unsigned int data)
{
    {
<START>
        data--;
<END>
        unsigned int result = data;
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
