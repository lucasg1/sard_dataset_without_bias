void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = -2;
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN2(data);
}
void FUN5(unsigned int data);
void FUN6(unsigned int data)
{
    FUN5(data);
}
void FUN7(unsigned int data);
void FUN8(unsigned int data)
{
    FUN7(data);
}
void FUN6(unsigned int data);
void FUN0(unsigned int data)
{
    FUN6(data);
}
void FUN8(unsigned int data);
void FUN2(unsigned int data)
{
    FUN8(data);
}
void FUN5(unsigned int data)
{
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN7(unsigned int data)
{
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
