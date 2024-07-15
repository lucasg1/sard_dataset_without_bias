void FUN0()
{
    int i,j;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        printIntLine(100 / data);
<END>
    }
}
