void FUN0()
{
    float data;
    data = 0.0F;
    while(1)
    {
        fscanf (stdin, "%f", &data);
        break;
    }
    while(1)
    {
        {
<START>
            int result = (int)(100.0 / data);
<END>
            printIntLine(result);
        }
        break;
    }
}
