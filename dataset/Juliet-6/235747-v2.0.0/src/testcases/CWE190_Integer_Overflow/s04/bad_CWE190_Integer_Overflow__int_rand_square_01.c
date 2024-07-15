void FUN0()
{
    int data;
    data = 0;
    data = RAND32();
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
