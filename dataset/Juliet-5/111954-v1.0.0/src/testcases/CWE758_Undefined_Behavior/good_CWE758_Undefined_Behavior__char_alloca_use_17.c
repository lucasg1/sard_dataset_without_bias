void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
}
