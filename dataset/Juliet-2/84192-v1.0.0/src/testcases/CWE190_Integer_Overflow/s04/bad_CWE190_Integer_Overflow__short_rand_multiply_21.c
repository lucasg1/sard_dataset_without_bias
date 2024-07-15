static int VAR0 = 0;
void FUN0(short data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR0 = 1; 
    FUN0(data);
}
