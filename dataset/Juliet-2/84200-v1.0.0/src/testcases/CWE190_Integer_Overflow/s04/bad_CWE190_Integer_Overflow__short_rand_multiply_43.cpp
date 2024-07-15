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
    if(data > 0) 
    {
<START>
        short result = data * 2;
<END>
        printIntLine(result);
    }
}
} 
