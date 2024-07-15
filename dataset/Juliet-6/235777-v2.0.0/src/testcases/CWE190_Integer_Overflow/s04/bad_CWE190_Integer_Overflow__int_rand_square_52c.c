void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN2(int data)
{
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
