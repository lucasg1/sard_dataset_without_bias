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
            size_t i, sourceLen;
            sourceLen = strlen(source);
            for (i = 0; i < sourceLen + 1; i++)
            {
                data[i] = source[i];
            }
            printLine(data);
            delete [] data;
        }
    }
}
} 
