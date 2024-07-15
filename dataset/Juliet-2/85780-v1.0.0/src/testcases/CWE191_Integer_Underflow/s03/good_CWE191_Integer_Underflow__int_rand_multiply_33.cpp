namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = -2;
    {
        int data = dataRef;
        if(data < 0) 
        {
            int result = data * 2;
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
        if(data < 0) 
        {
            if (data > (INT_MIN/2))
            {
                int result = data * 2;
                printIntLine(result);
            }
            else
            {
                printLine("data value is too small to perform multiplication.");
            }
        }
    }
}
} 
