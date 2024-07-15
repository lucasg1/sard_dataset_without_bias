namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = 2;
    {
        int data = dataRef;
        {
            int result = data * data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = RAND32();
    {
        int data = dataRef;
        if (data > INT_MIN && abs(data) < (long)sqrt((double)INT_MAX))
        {
            int result = data * data;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
