namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        data = new char[100];
        data[0] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            SNPRINTF(data, 100, "%s", source);
            printLine(data);
            delete [] data;
        }
    }
}
} 
