namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = CHAR_MAX-5;
    {
        int data = dataRef;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
} 
