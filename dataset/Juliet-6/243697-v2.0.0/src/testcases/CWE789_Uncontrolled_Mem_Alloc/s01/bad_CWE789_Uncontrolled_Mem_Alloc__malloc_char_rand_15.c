void FUN0()
{
    size_t data;
    data = 0;
    switch(6)
    {
    case 6:
        data = rand();
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
