static int FUN0(int data)
{
    data = RAND32();
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
<START>
    printIntLine(100 % data);
<END>
}
