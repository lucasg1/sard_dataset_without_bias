void FUN0()
{
    short data;
    data = 0;
    data = (short)RAND32();
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
