float FUN0(float data)
{
    data = 0.0F;
    return data;
}
float FUN0(float data);
void FUN2()
{
    float data;
    data = 0.0F;
    data = FUN0(data);
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
