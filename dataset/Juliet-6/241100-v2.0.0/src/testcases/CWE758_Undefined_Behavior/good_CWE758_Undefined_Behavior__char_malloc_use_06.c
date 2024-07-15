static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
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
