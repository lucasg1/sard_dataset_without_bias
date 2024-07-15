void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * pointer = (char *)ALLOCA(sizeof(char));
<START>
            char data = *pointer; 
<END>
            printHexCharLine(data);
        }
    }
}
