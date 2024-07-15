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
    data = UINT_MAX;
    FUN1(data);
}
void FUN0(unsigned int data)
{
    {
<START>
        ++data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
