void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = (short)RAND32();
        break;
    }
    while(1)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
        break;
    }
}
