namespace NAMESPACE0
{
void FUN0()
{
    int h;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new char[10+1];
    }
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
