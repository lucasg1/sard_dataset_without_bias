namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[10];
    {
        char * data = dataRef;
        {
            char source[10+1] = SRC_STRING;
<START>
            strncpy(data, source, strlen(source) + 1);
<END>
            printLine(data);
            delete [] data;
        }
    }
}
} 
