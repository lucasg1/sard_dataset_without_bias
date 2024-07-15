void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    data = RAND32();
    goto sink;
sink:
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
