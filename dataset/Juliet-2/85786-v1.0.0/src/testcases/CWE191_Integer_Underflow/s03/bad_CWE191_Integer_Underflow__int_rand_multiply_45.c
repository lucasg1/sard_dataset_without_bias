static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int data = VAR0;
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    VAR0 = data;
    FUN0();
}
