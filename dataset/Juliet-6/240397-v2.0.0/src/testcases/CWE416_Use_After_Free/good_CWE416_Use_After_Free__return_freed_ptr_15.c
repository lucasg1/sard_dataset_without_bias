static char * FUN0(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        free(reversedString);
        return reversedString;
    }
    else
    {
        return NULL;
    }
}
static char * FUN1(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        return reversedString;
    }
    else
    {
        return NULL;
    }
}
void FUN2()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * reversedString = FUN1("GoodSink");
        printLine(reversedString);
    }
    break;
    }
}
void FUN3()
{
    switch(6)
    {
    case 6:
    {
        char * reversedString = FUN1("GoodSink");
        printLine(reversedString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
