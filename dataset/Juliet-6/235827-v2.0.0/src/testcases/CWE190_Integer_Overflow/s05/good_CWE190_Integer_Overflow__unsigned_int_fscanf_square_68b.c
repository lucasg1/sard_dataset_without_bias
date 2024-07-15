unsigned int VAR0;
unsigned int VAR1;
unsigned int VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    unsigned int data;
    data = 0;
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    VAR2 = data;
    FUN1();
}
extern unsigned int VAR0;
extern unsigned int VAR1;
extern unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR1;
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data = VAR2;
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
