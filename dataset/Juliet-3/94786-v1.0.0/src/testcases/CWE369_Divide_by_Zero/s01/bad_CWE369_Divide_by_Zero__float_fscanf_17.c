void FUN0()
{
    int i,j;
    float data;
    data = 0.0F;
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%f", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
    }
}
