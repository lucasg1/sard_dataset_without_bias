namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 7;
    {
        int data = dataRef;
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
void FUN1()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 10;
    {
        int data = dataRef;
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
} 
