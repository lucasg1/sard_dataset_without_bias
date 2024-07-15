namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = SHRT_MAX + 5;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
} 
