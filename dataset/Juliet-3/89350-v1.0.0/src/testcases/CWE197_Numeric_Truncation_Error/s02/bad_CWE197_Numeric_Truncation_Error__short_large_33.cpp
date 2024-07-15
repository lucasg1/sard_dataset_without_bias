namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = -1;
    data = CHAR_MAX + 1;
    {
        short data = dataRef;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
} 
