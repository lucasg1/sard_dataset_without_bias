namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = 2;
    {
        short data = dataRef;
        {
            short result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    short data;
    short &dataRef = data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short data = dataRef;
        if (abs((long)data) <= (long)sqrt((double)SHRT_MAX))
        {
            short result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
