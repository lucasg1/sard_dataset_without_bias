void FUN0(int data)
{
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN0(data);
}
