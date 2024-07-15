namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 10;
    {
        int data = dataRef;
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
<START>
                printIntLine(buffer[data]);
<END>
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
} 
