void FUN0()
{
    goto sink;
sink:
    {
        char * * pointer = (char * *)malloc(sizeof(char *));
        if (pointer == NULL) {exit(-1);}
<START>
        char * data = *pointer; 
<END>
        free(pointer);
        printLine(data);
    }
}
