namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            char data;
            data = 5;
            char * pointer = new char;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            delete pointer;
        }
    }
}
} 
