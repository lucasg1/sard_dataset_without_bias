namespace NAMESPACE0
{
void FUN0()
{
    float data;
    float &dataRef = data;
    data = 0.0F;
    data = 2.0F;
    {
        float data = dataRef;
        {
            int result = (int)(100.0 / data);
            printIntLine(result);
        }
    }
}
void FUN1()
{
    float data;
    float &dataRef = data;
    data = 0.0F;
    fscanf (stdin, "%f", &data);
    {
        float data = dataRef;
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
}
} 
