namespace NAMESPACE0
{
void FUN0(float &data)
{
    data = 0.0F;
}
void FUN1()
{
    float data;
    data = 0.0F;
    FUN0(data);
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
} 
