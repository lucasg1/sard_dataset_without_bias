static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    size_t data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = rand();
    }
    if(STATIC_CONST_FIVE==5)
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
