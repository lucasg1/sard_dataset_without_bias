void FUN0()
{
    goto sink;
sink:
    {
        char * data;
        char * * pointer = (char * *)malloc(sizeof(char *));
        if (pointer == NULL) {exit(-1);}
        data = "string";
        *pointer = data; 
        {
            char * data = *pointer;
            printLine(data);
        }
        free(pointer);
    }
}
