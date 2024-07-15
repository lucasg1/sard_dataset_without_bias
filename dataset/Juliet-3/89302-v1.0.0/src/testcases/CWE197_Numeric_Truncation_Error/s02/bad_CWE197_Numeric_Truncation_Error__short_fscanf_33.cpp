namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = -1;
    fscanf (stdin, "%hd", &data);
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
