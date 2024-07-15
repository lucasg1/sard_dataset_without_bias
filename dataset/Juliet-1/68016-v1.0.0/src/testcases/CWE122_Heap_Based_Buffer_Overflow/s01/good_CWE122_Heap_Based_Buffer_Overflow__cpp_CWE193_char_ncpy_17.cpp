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
        strncpy(data, source, strlen(source) + 1);
        printLine(data);
        delete [] data;
    }
}
} 
