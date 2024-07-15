void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = RAND32();
    goto sink;
sink:
<START>
    printIntLine(100 / data);
<END>
}
