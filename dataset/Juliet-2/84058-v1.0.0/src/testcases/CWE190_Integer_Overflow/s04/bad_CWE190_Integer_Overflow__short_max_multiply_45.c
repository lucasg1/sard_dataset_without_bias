static short VAR0;
static short VAR1;
static short VAR2;
void FUN0()
{
    short data = VAR0;
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    VAR0 = data;
    FUN0();
}
