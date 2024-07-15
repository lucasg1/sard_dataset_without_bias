namespace NAMESPACE0
{
void FUN0()
{
    while(1)
    {
        {
            char * pointer = new char;
<START>
            char data = *pointer; 
<END>
            delete pointer;
            printHexCharLine(data);
        }
        break;
    }
}
} 
