void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    fscanf(stdin, "%d", &data);
    goto sink;
sink:
<START>
    printIntLine(100 % data);
<END>
}
