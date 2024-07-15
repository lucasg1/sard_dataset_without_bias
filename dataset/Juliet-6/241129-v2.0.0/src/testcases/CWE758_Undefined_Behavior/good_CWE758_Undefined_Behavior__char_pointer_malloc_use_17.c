void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
