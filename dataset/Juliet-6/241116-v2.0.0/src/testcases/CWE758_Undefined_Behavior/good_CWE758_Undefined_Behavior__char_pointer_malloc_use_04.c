static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
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
