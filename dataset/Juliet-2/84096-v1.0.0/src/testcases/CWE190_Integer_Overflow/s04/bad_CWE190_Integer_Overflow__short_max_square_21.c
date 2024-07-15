static int VAR0 = 0;
void FUN0(short data)
{
    if(VAR0)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = SHRT_MAX;
    VAR0 = 1; 
    FUN0(data);
}
