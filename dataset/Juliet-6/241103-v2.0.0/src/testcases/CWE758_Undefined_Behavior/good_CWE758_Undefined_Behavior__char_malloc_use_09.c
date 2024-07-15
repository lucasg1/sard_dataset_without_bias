void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char data;
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
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
            char data;
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
            data = 5;
            *pointer = data; 
            {
                char data = *pointer;
                printHexCharLine(data);
            }
            free(pointer);
        }
    }
}
