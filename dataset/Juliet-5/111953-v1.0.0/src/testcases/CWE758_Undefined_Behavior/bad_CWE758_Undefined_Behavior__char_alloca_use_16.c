void FUN0()
{
    while(1)
    {
        {
            char * pointer = (char *)ALLOCA(sizeof(char));
<START>
            char data = *pointer; 
<END>
            printHexCharLine(data);
        }
        break;
    }
}
