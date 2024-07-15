namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = CHAR_MAX-5;
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN2()
{
    int data;
    data = -1;
    FUN0(data);
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
} 
