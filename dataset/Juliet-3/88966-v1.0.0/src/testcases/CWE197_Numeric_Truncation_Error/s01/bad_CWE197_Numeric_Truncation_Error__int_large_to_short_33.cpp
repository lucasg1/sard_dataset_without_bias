namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = SHRT_MAX + 5;
    {
        int data = dataRef;
        {
<START>
            short shortData = (short)data;
<END>
            printShortLine(shortData);
        }
    }
}
} 
