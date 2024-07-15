namespace NAMESPACE0
{
void FUN0()
{
    {
        char * pointer = new char;
<START>
        char data = *pointer; 
<END>
        delete pointer;
        printHexCharLine(data);
    }
}
} 
