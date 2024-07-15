unsigned int VAR0;
unsigned int VAR1;
unsigned int VAR2;
void FUN0();
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    VAR0 = data;
    FUN0();
}
extern unsigned int VAR0;
extern unsigned int VAR1;
extern unsigned int VAR2;
void FUN0()
{
    unsigned int data = VAR0;
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
