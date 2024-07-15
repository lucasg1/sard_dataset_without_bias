void FUN0(float data);
void FUN1()
{
    float data;
    void (*funcPtr) (float) = FUN0;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    funcPtr(data);
}
void FUN0(float data)
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
