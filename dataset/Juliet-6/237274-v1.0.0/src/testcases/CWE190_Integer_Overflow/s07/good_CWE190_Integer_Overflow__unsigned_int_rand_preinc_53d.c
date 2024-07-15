void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN3(unsigned int data)
{
    FUN2(data);
}
void FUN4(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN4(data);
}
void FUN6(unsigned int data);
void FUN7()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN6(data);
}
void FUN1(unsigned int data);
void FUN4(unsigned int data)
{
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN6(unsigned int data)
{
    FUN3(data);
}
void FUN0(unsigned int data)
{
    {
        ++data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int data)
{
    if (data < UINT_MAX)
    {
        ++data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
