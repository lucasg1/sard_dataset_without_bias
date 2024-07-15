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
void FUN5(unsigned int data)
{
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN7(unsigned int data)
{
    FUN3(data);
}
void FUN5(unsigned int data);
void FUN9()
{
    unsigned int data;
    data = 0;
    data = -2;
    FUN5(data);
}
void FUN7(unsigned int data);
void FUN11()
{
    unsigned int data;
    data = 0;
    data = 0;
    FUN7(data);
}
void FUN0(unsigned int data)
{
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int data)
{
    if (data > 0)
    {
        data--;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
