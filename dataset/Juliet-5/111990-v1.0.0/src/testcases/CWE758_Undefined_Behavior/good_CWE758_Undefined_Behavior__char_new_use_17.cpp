namespace NAMESPACE0
{
void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
