void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    FUN0(data);
}
void FUN0(int data)
{
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
