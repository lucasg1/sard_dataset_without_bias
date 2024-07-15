void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    data = INT_MAX;
    goto sink;
sink:
    {
<START>
        ++data;
<END>
        int result = data;
        printIntLine(result);
    }
}
