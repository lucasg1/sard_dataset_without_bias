void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
