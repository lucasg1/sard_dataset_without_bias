void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
<START>
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}
