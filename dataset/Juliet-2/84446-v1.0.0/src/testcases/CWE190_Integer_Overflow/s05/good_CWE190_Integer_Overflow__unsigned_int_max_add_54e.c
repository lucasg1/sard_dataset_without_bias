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
void FUN0(unsigned int data)
{
    FUN4(data);
}
void FUN6(unsigned int data);
void FUN2(unsigned int data)
{
    FUN6(data);
}
void FUN8(unsigned int data);
void FUN4(unsigned int data)
{
    FUN8(data);
}
void FUN10(unsigned int data);
void FUN6(unsigned int data)
{
    FUN10(data);
}
void FUN1(unsigned int data);
void FUN13()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN15()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN3(data);
}
void FUN8(unsigned int data)
{
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
void FUN10(unsigned int data)
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
