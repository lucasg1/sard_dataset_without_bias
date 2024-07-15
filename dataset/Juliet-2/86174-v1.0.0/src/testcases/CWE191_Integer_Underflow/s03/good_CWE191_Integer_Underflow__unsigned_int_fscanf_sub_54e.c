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
void FUN0(unsigned int data)
{
    FUN5(data);
}
void FUN7(unsigned int data);
void FUN2(unsigned int data)
{
    FUN7(data);
}
void FUN9(unsigned int data);
void FUN5(unsigned int data)
{
    FUN9(data);
}
void FUN11(unsigned int data);
void FUN7(unsigned int data)
{
    FUN11(data);
}
void FUN13(unsigned int data);
void FUN9(unsigned int data)
{
    FUN13(data);
}
void FUN15(unsigned int data);
void FUN11(unsigned int data)
{
    FUN15(data);
}
void FUN13(unsigned int data)
{
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN15(unsigned int data)
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
