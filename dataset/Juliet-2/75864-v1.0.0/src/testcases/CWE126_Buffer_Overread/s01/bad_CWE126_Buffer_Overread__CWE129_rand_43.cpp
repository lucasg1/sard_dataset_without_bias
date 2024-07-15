namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = RAND32();
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
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
