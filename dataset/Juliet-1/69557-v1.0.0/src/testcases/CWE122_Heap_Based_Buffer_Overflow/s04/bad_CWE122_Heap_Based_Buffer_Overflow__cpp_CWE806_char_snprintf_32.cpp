namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = new char[100];
    {
        char * data = *dataPtr1;
        memset(data, 'A', 100-1); 
        data[100-1] = '\0'; 
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        {
            char dest[50] = "";
<START>
            SNPRINTF(dest, strlen(data), "%s", data);
<END>
            printLine(data);
            delete [] data;
        }
    }
}
} 
