namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[10];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
<START>
            memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
            printLine(data);
            delete [] data;
        }
    }
}
} 
