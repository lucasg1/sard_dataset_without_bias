void FUN0()
{
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
}
