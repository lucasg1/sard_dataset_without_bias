namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = RAND32();
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
} 
