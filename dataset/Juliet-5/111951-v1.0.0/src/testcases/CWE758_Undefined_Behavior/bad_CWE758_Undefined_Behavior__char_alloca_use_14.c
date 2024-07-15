void FUN0()
{
    if(globalFive==5)
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
