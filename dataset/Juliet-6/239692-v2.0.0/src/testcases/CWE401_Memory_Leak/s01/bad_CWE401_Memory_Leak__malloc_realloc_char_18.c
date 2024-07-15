void FUN0()
{
    goto sink;
sink:
    {
        char * data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        strcpy(data, "A String");
        printLine(data);
<START>
        data = (char *)realloc(data, (130000)*sizeof(char));
<END>
        if (data != NULL)
        {
            strcpy(data, "New String");
            printLine(data);
            free(data);
        }
    }
}
