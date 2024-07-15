static unsigned int VAR0;
static unsigned int VAR1;
static unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR0;
    {
<START>
        ++data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    VAR0 = data;
    FUN0();
}
