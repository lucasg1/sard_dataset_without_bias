void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (short)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
