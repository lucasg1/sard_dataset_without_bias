void FUN0(void * dataVoidPtr);
void FUN1()
{
    float data;
    data = 0.0F;
    data = 2.0F;
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    float data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    FUN2(&data);
}
void FUN0(void * dataVoidPtr)
{
    float * dataPtr = (float *)dataVoidPtr;
    float data = (*dataPtr);
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
void FUN2(void * dataVoidPtr)
{
    float * dataPtr = (float *)dataVoidPtr;
    float data = (*dataPtr);
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
