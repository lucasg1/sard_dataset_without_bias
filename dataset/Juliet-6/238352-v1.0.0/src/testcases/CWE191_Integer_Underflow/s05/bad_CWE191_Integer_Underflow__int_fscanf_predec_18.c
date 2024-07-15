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
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}
