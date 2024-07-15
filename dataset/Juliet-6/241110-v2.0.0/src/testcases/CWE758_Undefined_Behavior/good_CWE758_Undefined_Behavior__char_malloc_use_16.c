void FUN0()
{
    while(1)
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
        break;
    }
}
