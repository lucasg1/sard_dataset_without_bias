void FUN0()
{
    int k;
    char * data;
    data = NULL; 
    data = (char *)realloc(data, 20*sizeof(char));
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
    }
}
