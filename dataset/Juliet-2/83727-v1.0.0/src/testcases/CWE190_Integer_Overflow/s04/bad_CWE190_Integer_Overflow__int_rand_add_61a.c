int FUN0(int data)
{
    data = RAND32();
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
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
