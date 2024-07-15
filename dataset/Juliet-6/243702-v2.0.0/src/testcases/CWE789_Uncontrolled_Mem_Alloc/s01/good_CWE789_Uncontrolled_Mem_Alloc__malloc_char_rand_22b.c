int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(size_t data);
void FUN1()
{
    size_t data;
    data = 0;
    data = rand();
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(size_t data);
void FUN3()
{
    size_t data;
    data = 0;
    data = rand();
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(size_t data);
void FUN5()
{
    size_t data;
    data = 0;
    data = 20;
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(size_t data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING) && data < 100)
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
void FUN2(size_t data)
{
    if(VAR1)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING) && data < 100)
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string or too large");
            }
        }
    }
}
void FUN4(size_t data)
{
    if(VAR2)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
                myString = (char *)malloc(data*sizeof(char));
                if (myString == NULL) {exit(-1);}
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                free(myString);
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}
