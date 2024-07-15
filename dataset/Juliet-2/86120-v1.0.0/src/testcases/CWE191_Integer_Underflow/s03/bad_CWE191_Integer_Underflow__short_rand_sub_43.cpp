namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = (short)RAND32();
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}
} 
