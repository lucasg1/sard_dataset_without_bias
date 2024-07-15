void FUN0()
{
    int data;
    data = 0;
    data = RAND32();
    {
<START>
        data--;
<END>
        int result = data;
        printIntLine(result);
    }
}
