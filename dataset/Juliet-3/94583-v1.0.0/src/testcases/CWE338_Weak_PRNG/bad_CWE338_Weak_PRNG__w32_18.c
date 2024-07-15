void FUN0()
{
    goto sink;
sink:
    {
<START>
        int data = rand();
<END>
        printIntLine(data);
    }
}
