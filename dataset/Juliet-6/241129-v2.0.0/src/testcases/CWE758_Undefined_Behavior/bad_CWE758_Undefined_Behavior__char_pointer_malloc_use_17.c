void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
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
}
