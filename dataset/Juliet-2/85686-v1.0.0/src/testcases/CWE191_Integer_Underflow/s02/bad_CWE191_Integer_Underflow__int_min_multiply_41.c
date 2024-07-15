void FUN0(int data)
{
    if(data < 0) 
    {
<START>
        int result = data * 2;
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
