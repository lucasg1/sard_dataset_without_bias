namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
void FUN1()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
