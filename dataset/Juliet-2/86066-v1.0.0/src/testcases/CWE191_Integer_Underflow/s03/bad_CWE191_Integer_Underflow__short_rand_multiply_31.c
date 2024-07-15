void FUN0()
{
    short data;
    data = 0;
    data = (short)RAND32();
    {
        short dataCopy = data;
        short data = dataCopy;
        if(data < 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
