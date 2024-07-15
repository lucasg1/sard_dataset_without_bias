void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN1(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN1(data);
}
void FUN0(unsigned int data)
{
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
