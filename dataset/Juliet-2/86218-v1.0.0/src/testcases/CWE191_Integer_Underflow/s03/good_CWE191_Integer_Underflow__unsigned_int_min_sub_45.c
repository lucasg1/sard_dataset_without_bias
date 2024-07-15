static unsigned int VAR0;
static unsigned int VAR1;
static unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR1;
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    unsigned int data = VAR2;
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
void FUN3()
{
    unsigned int data;
    data = 0;
    data = 0;
    VAR2 = data;
    FUN2();
}
