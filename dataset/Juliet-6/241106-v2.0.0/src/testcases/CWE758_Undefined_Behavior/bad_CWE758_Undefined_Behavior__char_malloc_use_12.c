void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * pointer = (char *)malloc(sizeof(char));
            if (pointer == NULL) {exit(-1);}
<START>
            char data = *pointer; 
<END>
            free(pointer);
            printHexCharLine(data);
        }
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
