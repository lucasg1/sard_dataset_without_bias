void FUN0()
{
    short data;
    data = 0;
    data = SHRT_MIN;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
