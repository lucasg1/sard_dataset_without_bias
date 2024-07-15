static int VAR0 = 0;
void FUN0(short data)
{
    if(VAR0)
    {
        {
<START>
            --data;
<END>
            short result = data;
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
