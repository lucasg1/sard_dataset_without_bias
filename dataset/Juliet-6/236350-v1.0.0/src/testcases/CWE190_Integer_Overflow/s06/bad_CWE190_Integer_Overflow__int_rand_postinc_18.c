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
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}
