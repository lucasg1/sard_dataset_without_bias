void FUN0()
{
    int i,j;
    int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
