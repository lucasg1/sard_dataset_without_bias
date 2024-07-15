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
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        delete [] data;
    }
}
void FUN1()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL;
    {
        char * data = *dataPtr1;
        {
            char myString[] = "myString";
            data = strdup(myString);
        }
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        free(data);
    }
}
} 
