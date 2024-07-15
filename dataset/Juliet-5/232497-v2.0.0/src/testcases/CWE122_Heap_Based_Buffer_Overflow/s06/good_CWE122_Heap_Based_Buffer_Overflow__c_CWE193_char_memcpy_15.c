void FUN0()
{
    char * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (char *)malloc((10+1)*sizeof(char));
        if (data == NULL) {exit(-1);}
        break;
    }
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (char *)malloc((10+1)*sizeof(char));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}
