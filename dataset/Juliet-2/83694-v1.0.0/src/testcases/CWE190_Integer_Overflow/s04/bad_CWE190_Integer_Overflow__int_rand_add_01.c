void FUN0()
{
    int data;
    data = 0;
    data = RAND32();
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
