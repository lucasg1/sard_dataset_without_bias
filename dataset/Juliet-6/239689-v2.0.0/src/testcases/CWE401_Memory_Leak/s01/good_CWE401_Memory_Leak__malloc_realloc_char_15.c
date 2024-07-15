void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        char * tmpData;
        strcpy(data, "A String");
        printLine(data);
        tmpData = (char *)realloc(data, (130000)*sizeof(char));
        if (tmpData != NULL)
        {
            data = tmpData;
            strcpy(data, "New String");
            printLine(data);
        }
        free(data);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char * data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        char * tmpData;
        strcpy(data, "A String");
        printLine(data);
        tmpData = (char *)realloc(data, (130000)*sizeof(char));
        if (tmpData != NULL)
        {
            data = tmpData;
            strcpy(data, "New String");
            printLine(data);
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
