void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    while(1)
    {
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
        break;
    }
}
