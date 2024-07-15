namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    size_t data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%zu", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
            char * myString;
            if (data > strlen(HELLO_STRING))
            {
<START>
                myString = new char[data];
<END>
                strcpy(myString, HELLO_STRING);
                printLine(myString);
                delete [] myString;
            }
            else
            {
                printLine("Input is less than the length of the source string");
            }
        }
    }
}
} 
