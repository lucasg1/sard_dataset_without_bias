namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL;
    data = new char[10+1];
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char source[10+1] = SRC_STRING;
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            delete [] data;
        }
    }
}
} 
