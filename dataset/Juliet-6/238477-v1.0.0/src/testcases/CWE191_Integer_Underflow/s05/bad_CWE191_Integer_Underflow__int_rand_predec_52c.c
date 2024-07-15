void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = 0;
    data = RAND32();
    FUN1(data);
}
void FUN0(int data)
{
    {
<START>
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}
