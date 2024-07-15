void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    data = INT_MIN;
    goto sink;
sink:
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
