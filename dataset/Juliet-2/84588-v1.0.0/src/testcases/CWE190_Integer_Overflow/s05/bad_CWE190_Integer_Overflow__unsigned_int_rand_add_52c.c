void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN0(unsigned int data)
{
    FUN2(data);
}
void FUN2(unsigned int data)
{
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
