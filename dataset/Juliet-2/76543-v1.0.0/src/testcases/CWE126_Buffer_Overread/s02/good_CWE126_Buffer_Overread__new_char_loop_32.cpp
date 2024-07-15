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
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            size_t i, destLen;
            char dest[100];
            memset(dest, 'C', 100-1);
            dest[100-1] = '\0'; 
            destLen = strlen(dest);
            for (i = 0; i < destLen; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = '\0';
            printLine(dest);
            delete [] data;
        }
    }
}
} 
