static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(staticTrue)
    {
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
    }
}
