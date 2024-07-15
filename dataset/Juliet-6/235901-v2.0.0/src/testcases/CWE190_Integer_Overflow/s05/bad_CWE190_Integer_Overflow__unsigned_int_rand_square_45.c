static unsigned int VAR0;
static unsigned int VAR1;
static unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR0;
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    VAR0 = data;
    FUN0();
}
