namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    data = new char[10+1];
    {
        char * data = dataRef;
        {
            char source[10+1] = SRC_STRING;
            strcpy(data, source);
            printLine(data);
            delete [] data;
        }
    }
}
} 
