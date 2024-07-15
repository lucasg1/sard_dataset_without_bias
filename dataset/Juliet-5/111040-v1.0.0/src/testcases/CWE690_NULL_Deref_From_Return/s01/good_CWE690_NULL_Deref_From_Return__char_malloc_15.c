void FUN0()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
        break;
    }
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)malloc(20*sizeof(char));
    switch(6)
    {
    case 6:
        if (data != NULL)
        {
            strcpy(data, "Initialize");
            printLine(data);
            free(data);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
