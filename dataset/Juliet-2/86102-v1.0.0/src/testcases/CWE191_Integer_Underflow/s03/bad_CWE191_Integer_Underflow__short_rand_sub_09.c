void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = (short)RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
