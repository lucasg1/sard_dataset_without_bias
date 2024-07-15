void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN0(unsigned int data)
{
    FUN2(data);
}
void FUN4(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN4(data);
}
void FUN1(unsigned int data);
void FUN4(unsigned int data)
{
    FUN1(data);
}
void FUN2(unsigned int data)
{
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
