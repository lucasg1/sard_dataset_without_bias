void FUN0()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    {
        int dataCopy = data;
        int data = dataCopy;
<START>
        printIntLine(100 / data);
<END>
    }
}
