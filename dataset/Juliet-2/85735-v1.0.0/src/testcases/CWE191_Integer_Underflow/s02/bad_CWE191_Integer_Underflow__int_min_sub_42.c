static int FUN0(int data)
{
    data = INT_MIN;
    return data;
}
void FUN1()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}