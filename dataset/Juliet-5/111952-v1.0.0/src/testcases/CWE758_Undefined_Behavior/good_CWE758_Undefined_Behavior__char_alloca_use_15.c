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
        char * pointer = (char *)ALLOCA(sizeof(char));
        data = 5;
        *pointer = data; 
        {
            char data = *pointer;
            printHexCharLine(data);
        }
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
        char * pointer = (char *)ALLOCA(sizeof(char));
        data = 5;
        *pointer = data; 
        {
            char data = *pointer;
            printHexCharLine(data);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
