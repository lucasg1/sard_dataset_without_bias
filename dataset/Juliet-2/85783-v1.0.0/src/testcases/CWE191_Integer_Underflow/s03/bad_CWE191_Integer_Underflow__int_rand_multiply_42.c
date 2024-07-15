static int FUN0(int data)
{
    data = RAND32();
    return data;
}
void FUN1()
{
    int data;
    data = 0;
    data = FUN0(data);
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
