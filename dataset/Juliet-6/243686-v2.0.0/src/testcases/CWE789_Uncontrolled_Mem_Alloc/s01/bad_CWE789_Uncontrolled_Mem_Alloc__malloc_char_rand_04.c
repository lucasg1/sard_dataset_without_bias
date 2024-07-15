static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    size_t data;
    data = 0;
    if(STATIC_CONST_TRUE)
    {
        data = rand();
    }
    if(STATIC_CONST_TRUE)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
<START>
                myString = (char *)malloc(data*sizeof(char));
<END>
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
