void FUN0(int data)
{
    {
<START>
        ++data;
<END>
        int result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    FUN0(data);
}
