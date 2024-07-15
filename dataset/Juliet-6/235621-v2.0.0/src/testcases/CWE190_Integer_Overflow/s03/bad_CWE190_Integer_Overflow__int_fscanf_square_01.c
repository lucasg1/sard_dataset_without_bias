void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
