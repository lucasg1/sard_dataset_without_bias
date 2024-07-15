void FUN0()
{
    int data;
    data = 0;
    goto source;
source:
    fscanf(stdin, "%d", &data);
    goto sink;
sink:
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
