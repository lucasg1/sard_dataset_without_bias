namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = -1;
    data = CHAR_MAX-5;
    {
        short data = dataRef;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
} 
