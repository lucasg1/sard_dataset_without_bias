void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * pointer = (char *)ALLOCA(sizeof(char));
<START>
        char data = *pointer; 
<END>
        printHexCharLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
