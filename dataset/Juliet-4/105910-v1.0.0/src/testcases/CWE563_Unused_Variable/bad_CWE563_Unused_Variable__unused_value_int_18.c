void FUN0()
{
    int data;
    goto source;
source:
    data = 5;
    goto sink;
sink:
<START>
    data = 10;
<END>
    printIntLine(data);
}
