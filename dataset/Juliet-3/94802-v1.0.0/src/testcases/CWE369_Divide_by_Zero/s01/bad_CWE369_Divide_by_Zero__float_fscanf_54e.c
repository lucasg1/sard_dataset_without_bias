void FUN0(float data);
void FUN1(float data)
{
    FUN0(data);
}
void FUN2(float data);
void FUN3()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    FUN2(data);
}
void FUN1(float data);
void FUN2(float data)
{
    FUN1(data);
}
void FUN6(float data);
void FUN0(float data)
{
    FUN6(data);
}
void FUN6(float data)
{
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
