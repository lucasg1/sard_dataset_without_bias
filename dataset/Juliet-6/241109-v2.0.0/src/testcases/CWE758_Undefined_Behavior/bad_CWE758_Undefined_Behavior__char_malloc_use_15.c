void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * pointer = (char *)malloc(sizeof(char));
        if (pointer == NULL) {exit(-1);}
<START>
        char data = *pointer; 
<END>
        free(pointer);
        printHexCharLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
