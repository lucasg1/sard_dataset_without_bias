int FUN0(int data)
{
    data = INT_MAX;
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
