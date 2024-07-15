namespace NAMESPACE0
{
void FUN0()
{
    while(1)
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
        break;
    }
}
} 
