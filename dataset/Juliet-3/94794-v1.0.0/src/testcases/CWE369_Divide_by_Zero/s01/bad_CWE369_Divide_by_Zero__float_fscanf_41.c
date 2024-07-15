void FUN0(float data)
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    FUN0(data);
}
