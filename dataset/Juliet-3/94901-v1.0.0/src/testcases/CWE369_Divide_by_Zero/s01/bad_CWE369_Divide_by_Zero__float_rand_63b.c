void FUN0(float * dataPtr);
void FUN1()
{
    float data;
    data = 0.0F;
    data = (float)RAND32();
    FUN0(&data);
}
void FUN0(float * dataPtr)
{
    float data = *dataPtr;
    {
<START>
        int result = (int)(100.0 / data);
<END>
        printIntLine(result);
    }
}
