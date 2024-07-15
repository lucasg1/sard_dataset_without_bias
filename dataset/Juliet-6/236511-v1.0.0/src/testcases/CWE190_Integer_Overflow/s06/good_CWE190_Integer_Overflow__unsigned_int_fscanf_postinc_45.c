static unsigned int VAR0;
static unsigned int VAR1;
static unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR1;
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    unsigned int data = VAR2;
    if (data < UINT_MAX)
    {
        data++;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR2 = data;
    FUN2();
}
