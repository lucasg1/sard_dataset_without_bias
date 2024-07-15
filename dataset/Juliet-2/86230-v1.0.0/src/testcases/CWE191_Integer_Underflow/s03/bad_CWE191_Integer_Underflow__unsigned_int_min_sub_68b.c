unsigned int VAR0;
unsigned int VAR1;
unsigned int VAR2;
void FUN0();
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 0;
    VAR0 = data;
    FUN0();
}
extern unsigned int VAR0;
extern unsigned int VAR1;
extern unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR0;
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
