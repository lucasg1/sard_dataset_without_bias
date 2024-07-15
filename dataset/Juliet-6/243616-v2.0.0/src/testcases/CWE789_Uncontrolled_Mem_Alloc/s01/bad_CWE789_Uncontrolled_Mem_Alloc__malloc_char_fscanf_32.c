void FUN0()
{
    size_t data;
    size_t *dataPtr1 = &data;
    size_t *dataPtr2 = &data;
    data = 0;
    {
        size_t data = *dataPtr1;
        fscanf(stdin, "%zu", &data);
        *dataPtr1 = data;
    }
    {
        size_t data = *dataPtr2;
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
