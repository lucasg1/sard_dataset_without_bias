void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
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
}
