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
void FUN1(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN7()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN3(data);
}
void FUN9(unsigned int data);
void FUN10(unsigned int data)
{
    FUN9(data);
}
void FUN11(unsigned int data);
void FUN12(unsigned int data)
{
    FUN11(data);
}
void FUN10(unsigned int data);
void FUN0(unsigned int data)
{
    FUN10(data);
}
void FUN12(unsigned int data);
void FUN2(unsigned int data)
{
    FUN12(data);
}
void FUN9(unsigned int data)
{
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
void FUN11(unsigned int data)
{
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
