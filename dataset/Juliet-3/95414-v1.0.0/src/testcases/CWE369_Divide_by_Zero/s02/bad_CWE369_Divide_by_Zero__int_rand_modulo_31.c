void FUN0()
{
    int data;
    data = -1;
    data = RAND32();
    {
        int dataCopy = data;
        int data = dataCopy;
<START>
        printIntLine(100 % data);
<END>
    }
}
