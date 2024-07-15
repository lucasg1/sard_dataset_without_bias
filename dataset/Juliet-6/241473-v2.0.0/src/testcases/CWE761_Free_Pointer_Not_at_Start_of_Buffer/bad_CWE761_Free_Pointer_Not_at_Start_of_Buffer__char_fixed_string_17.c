void FUN0()
{
    int j;
    char * data;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    for(j = 0; j < 1; j++)
    {
<START>
        for (; *data != '\0'; data++)
<END>
        {
            if (*data == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
