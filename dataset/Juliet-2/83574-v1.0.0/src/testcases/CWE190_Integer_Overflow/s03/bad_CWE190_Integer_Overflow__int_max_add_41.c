void FUN0(int data)
{
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
<START>
    data = INT_MAX;
<END>
    FUN0(data);
}
