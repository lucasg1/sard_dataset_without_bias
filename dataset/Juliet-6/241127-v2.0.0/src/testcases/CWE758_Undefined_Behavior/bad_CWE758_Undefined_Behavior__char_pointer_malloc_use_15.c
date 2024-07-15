void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * * pointer = (char * *)malloc(sizeof(char *));
        if (pointer == NULL) {exit(-1);}
<START>
        char * data = *pointer; 
<END>
        free(pointer);
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
