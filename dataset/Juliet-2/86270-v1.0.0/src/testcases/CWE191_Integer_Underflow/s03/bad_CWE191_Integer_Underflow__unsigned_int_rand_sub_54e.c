void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN1(unsigned int data);
void FUN3(unsigned int data)
{
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN3(data);
}
void FUN6(unsigned int data);
void FUN0(unsigned int data)
{
    FUN6(data);
}
void FUN6(unsigned int data)
{
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}